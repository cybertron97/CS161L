`timescale 1ns / 1ps
include "cpu_constant_library.v"
module cs161_processor(
    clk ,
    rst ,
	 // Debug signals
    prog_count     ,
    instr_opcode   ,
    reg1_addr      ,
    reg1_data      ,
    reg2_addr      ,
    reg2_data      ,
    write_reg_addr ,
    write_reg_data
    );

input wire clk ;
input wire rst ;

// Debug Signals

output reg [31:0] prog_count     ;
output wire [5:0]  instr_opcode   ;
output wire [4:0]  reg1_addr      ;
output wire [31:0] reg1_data      ;
output wire [4:0]  reg2_addr      ;
output wire [31:0] reg2_data      ;
output wire [4:0]  write_reg_addr ;
output wire [31:0] write_reg_data ;

wire signed [31:0] pc_1;
wire signed [31:0] pc_2;
wire [31:0] instruction;
wire reg_dst;
wire mem_to_reg;
wire jump;
wire branch;
wire mem_read;
wire mem_write;
wire alu_src;
wire reg_write;
wire [1:0] alu_op;
wire [31:0] sign_extim;
wire [31:0] read_data2;
wire [31:0] zero_ext ;
wire [31:0] immext;
wire [3:0] ALU_Control;
wire [31:0] ALU_out;
wire zer;
wire signed[31:0] shift_2;
wire signed [31:0] pc_beq;
wire signed [31:0] pc_4beq;
wire beq_control;
wire [31:0] mem_read_data;
wire[31:0] n_sgn;


//Adding functionality
gen_register gen_register_inst(clk, rst, write_en, data_in, data_out);
cs161_datapath cs161_datapath(  clk ,
  rst ,
  instr_op ,
  funct   ,
  reg_dst ,
  branch  ,
  mem_read ,
  mem_to_reg ,
  alu_op    ,
  mem_write  ,
  alu_src  ,
  reg_write ,
 );
 always @ (posedge clk or posedge rst)
 begin: CS161_PROCESSOR
        if (rst)
          prog_count =0 ;
        else
          prog_count= pc_1;
  end

  assign pc_2=prog_count+32'd4;

  cpumemory cpumemory_inst(.clk(clk), .rst(rst), instr_read_address(prog_count[8:1]), .instr_instruction(instruction));
  control_unit control_unit_inst(
  .clk(clk), .reset(rst), instr_op(instruction[31:26]), .mem_to_reg(mem_to_reg),
  .alu_op(alu_op),
.branch(branch),
.mem_read(mem_read),
.mem_write(mem_write),
.alu_src(alu_src),
.reg_write(reg_write)
  );
assign reg_1_addr = instruction[25:21];
assign reg_2_addr = instruction[20:16];

cpu_registers cpu_registers_inst(.clk(clk), .rst(rst), .write_register(write_reg_addr), .write_data(write_reg_data), .read_register_1(reg_1_addr), .read_data_1(reg_1_data), .read_register_2(reg_2_addr), .read_data_2(reg_2_data), .reg_write(reg_write));
assign sign_extim = {{16{instruction[15]}}, instruction[15:0]};
assign zero_ext = {{16{1'b0}}, instruction[15:0]};
assign immext = sign_extim;

alu_control alu_control_inst(.clk(clk), .reset(reset), .alu_op(alu_op), .instruction_5_0(instruction[5:0]), .alu_out(ALU_Control));
mux_2_1 mux_2_1_inst(.select_in(alu_src), .datain1(immext), .datain2(reg2_data),.data_out(read_data2));
alu alu_inst(.alu_control_in(ALU_Control), .channel_a_in(reg1_data), .channel_b_in(read_data2), .zero_out(zer), .alu_result_out(ALU_Out));

assign shift_2 = {immext[29:0], 2'b00};
assign n_sgn = ~(shift_2) + 1'b1;
assign pc_beq = (shift_2[31] == 1'b1) ? (pc_2 - n_sgn) : (pc_2 + shift_2);
assign beq_control = branch & zer;
assign pc_4beq = (beq_control == 1'b1) ? pc_beq : pc_2;
assign pc_1 = pc_4beq;

cpumemory cpumemory_inst_datamem(.data_mem_write(mem_write), .data_address (ALU_out), .data_write_data(reg_2_data), .data_read_data(mem_read_data));
mux_2_1 mux_2_1_writeback(.select_in(mem_to_reg), .datain1(mem_read_data), .datain2(ALU_Out), .data_out(write_reg_data));

endmodule
