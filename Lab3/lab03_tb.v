`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:31:17 04/22/2019 
// Design Name: 
// Module Name:    alu_control 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////


module lab03_tb; 
	reg clk; 
	reg rst; 
	reg [5:0] instr_op; 
	wire reg_dst;
	wire  branch; 
	wire mem_read; 
	wire mem_to_reg;
	wire [1:0] alu_op; 
	wire mem_write; 
	wire alu_src;
	wire reg_write; 
	wire[3:0] alu_out; 
	
	reg [5:0] instruction_5_0; 

control_unit uut (
		.instr_op(instr_op), 
		.reg_dst(reg_dst), 
		.branch(branch), 
		.mem_read(mem_read), 
		.mem_to_reg(mem_to_reg), 
		.alu_op(alu_op), 
		.mem_write(mem_write), 
		.alu_src(alu_src), 
		.reg_write(reg_write)
	);

	alu_control aluct (
		.alu_op (alu_op) ,
		.instruction_5_0(instruction_5_0) , 
		.alu_out(alu_out)
	);

initial begin
		// Initialize Inputs
		clk = 0; rst =1 ; #50;
		clk = 1; rst =1 ; #50;
		clk = 0; rst =0 ; #50;
		clk = 1; rst =0 ; #50;
	 forever begin 
		clk = ~clk; #50; 
     end 
   end 	  
initial begin 
  #100; 
 instruction_5_0 = 6'b101010;
 instr_op = 6'b100011;
	#100; 
 $display(“TC10 Word”);
 if (reg_dst != 1'b0) $display  ("Reg dst is wrong");
 if (alu_src    != 1'b1) $display   ("Alu Src is wrong");
 if (mem_to_reg != 1'b1) $display("Mem to Reg is wrong");
 if (reg_write  != 1'b1) $display ("Reg Write is wrong");
 if (mem_read   != 1'b1) $display ("Mem read is wrong");
 if (mem_write  != 1'b0) $display ("Mem write is wrong");
 if (branch != 1'b0) $display ("Branch is wrong");
 if (alu_out != 4'b0010) $display ("Alu out is wrong");

//word storing
 instruction_5_0 = 6'b101010;
 instr_op = 6'b101011;
	#100; 
 $display(“TC21 Storing Word”);
 if (reg_dst != 1'b1) $display  ("Reg dst is wrong");
 if (alu_src    != 1'b1) $display   ("Alu Src is wrong");
 if (mem_to_reg != 1'b0) $display("Mem to Reg is wrong");
 if (reg_write  != 1'b0) $display ("Reg Write is wrong");
 if (mem_read   != 1'b0) $display ("Mem read is wrong");
 if (mem_write  != 1'b1) $display ("Mem write is wrong");
 if (branch != 1'b0) $display ("Branch is wrong");
 if (alu_out != 4'b0010) $display ("Alu out is wrong");

//beq
 instruction_5_0 = 6'b101010;
 instr_op = 6'b000100;
	#100; 
 $display(“TC31 BEQ”);
 if (reg_dst != 1'b0) $display  ("Reg dst is wrong");
 if (alu_src    != 1'b0) $display   ("Alu Src is wrong");
 if (mem_to_reg != 1'b1) $display("Mem to Reg is wrong");
 if (reg_write  != 1'b0) $display ("Reg Write is wrong");
 if (mem_read   != 1'b0) $display ("Mem read is wrong");
 if (mem_write  != 1'b0) $display ("Mem write is wrong");
 if (branch != 1'b1) $display ("Branch is wrong");
 if (alu_out != 4'b0110) $display ("Alu out is wrong");

//Add R-type
instruction_5_0 = 6'b100000;
 instr_op = 6'b000000;
	#100; 
 $display(“TC41 ADD TYPE”);
 if (reg_dst != 1'b1) $display  ("Reg dst is wrong");
 if (alu_src    != 1'b0) $display   ("Alu Src is wrong");
 if (mem_to_reg != 1'b1) $display("Mem to Reg is wrong");
 if (reg_write  != 1'b1) $display ("Reg Write is wrong");
 if (mem_read   != 1'b0) $display ("Mem read is wrong");
 if (mem_write  != 1'b0) $display ("Mem write is wrong");
 if (branch != 1'b0) $display ("Branch is wrong");
 if (alu_out != 4'b0010) $display ("Alu out is wrong");

//Sub 
instruction_5_0 = 6'b100010;
 instr_op = 6'b000000;
	#100; 
 $display(“TC51 Sub TYPE”);
 if (reg_dst != 1'b1) $display  ("Reg dst is wrong");
 if (alu_src    != 1'b0) $display   ("Alu Src is wrong");
 if (mem_to_reg != 1'b0) $display("Mem to Reg is wrong");
 if (reg_write  != 1'b1) $display ("Reg Write is wrong");
 if (mem_read   != 1'b0) $display ("Mem read is wrong");
 if (mem_write  != 1'b0) $display ("Mem write is wrong");
 if (branch != 1'b0) $display ("Branch is wrong");
 if (alu_out != 4'b0110) $display ("Alu out is wrong");


//And 
instruction_5_0 = 6'b100100;
 instr_op = 6'b000000;
	#100; 
 $display(“TC61 AND TYPE”);
 if (reg_dst != 1'b1) $display  ("Reg dst is wrong");
 if (alu_src    != 1'b0) $display   ("Alu Src is wrong");
 if (mem_to_reg != 1'b0) $display("Mem to Reg is wrong");
 if (reg_write  != 1'b1) $display ("Reg Write is wrong");
 if (mem_read   != 1'b0) $display ("Mem read is wrong");
 if (mem_write  != 1'b0) $display ("Mem write is wrong");
 if (branch != 1'b0) $display ("Branch is wrong");
 if (alu_out != 4'b0000) $display ("Alu out is wrong");

//OR
instruction_5_0 = 6'b100101;
 instr_op = 6'b000000;
	#100; 
 $display(“TC71 Or TYPE”);
 if (reg_dst != 1'b1) $display  ("Reg dst is wrong");
 if (alu_src    != 1'b0) $display   ("Alu Src is wrong");
 if (mem_to_reg != 1'b0) $display("Mem to Reg is wrong");
 if (reg_write  != 1'b1) $display ("Reg Write is wrong");
 if (mem_read   != 1'b0) $display ("Mem read is wrong");
 if (mem_write  != 1'b0) $display ("Mem write is wrong");
 if (branch != 1'b0) $display ("Branch is wrong");
 if (alu_out != 4'b0110) $display ("Alu out is wrong");

//NOR
instruction_5_0 = 6'b100111;
 instr_op = 6'b000000;
	#100; 
 $display(“TC81 Nor TYPE”);
 if (reg_dst != 1'b1) $display  ("Reg dst is wrong");
 if (alu_src    != 1'b0) $display   ("Alu Src is wrong");
 if (mem_to_reg != 1'b0) $display("Mem to Reg is wrong");
 if (reg_write  != 1'b1) $display ("Reg Write is wrong");
 if (mem_read   != 1'b0) $display ("Mem read is wrong");
 if (mem_write  != 1'b0) $display ("Mem write is wrong");
 if (branch != 1'b0) $display ("Branch is wrong");
 if (alu_out != 4'b1100) $display ("Alu out is wrong");

end

endmodule




