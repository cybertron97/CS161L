`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:13:14 04/22/2019 
// Design Name: 
// Module Name:    control_unit 
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
module control_unit(
	 input wire [5:0]instr_op, 
    output reg reg_dst,   
    output reg  branch,        
    output reg  mem_read,  
    output reg  mem_to_reg, 
    output reg [1:0]  alu_op,        
    output reg  mem_write,
    output reg  alu_src,    
    output reg  reg_write 
    );
	 
	 always @(*) begin
	 case (instr_op) 
	 6'b000000: 
		//R
		begin 
		reg_dst= 1'b1;
		branch = 1'b0; 
		mem_read= 1'b0; 
		mem_to_reg= 1'b0; 
		alu_op=2'b10; 
		mem_write= 1'b0;
		alu_src= 1'b0; 
		reg_write=1'b1;
		end
		//lw
	  6'b100011: 
		 begin
		 reg_dst= 1'b0;
		 branch = 1'b0; 
		 mem_read= 1'b1; 
		 mem_to_reg= 1'b1; 
		 alu_op=2'b00; 
		 mem_write= 1'b0;
		 alu_src= 1'b1; 
		 reg_write=1'b1;
		 end
		 //sw
	  6'b101011:
		 begin
		 //reg_dst= 1'b1;
		 branch = 1'b0; 
		 mem_read= 1'b0; 
		 //mem_to_reg= 1'b0; 
		 alu_op=2'b00; 
		 mem_write= 1'b1;
		 alu_src= 1'b1; 
		 reg_write=1'b0;
		 end
		//beq
		6'b000100:
		  begin
		  //reg_dst= 1'b1;
		  branch = 1'b1; 
		  mem_read= 1'b0; 
		  //mem_to_reg= 1'b0; 
		  alu_op=2'b01; 
		  mem_write= 1'b0;
		  alu_src= 1'b0; 
		  reg_write=1'b0;
		  end
       //imm addi 
		 6'b001000: 
		   begin
			reg_dst= 1'b1;
		   branch = 1'b0; 
		   mem_read= 1'b0; 
		   mem_to_reg= 1'b0; 
		   alu_op=2'b10; 
		   mem_write= 1'b0;
		   alu_src= 1'b0; 
		   reg_write=1'b1;
		   end
			endcase 
			end

endmodule
