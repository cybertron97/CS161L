`timescale 1ns / 1ps

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

input wire[31:0] prog_count     ; 
input wire[5:0]  instr_opcode   ;
input wire[4:0]  reg1_addr      ;
input wire[31:0] reg1_data      ;
input wire[4:0]  reg2_addr      ;
input wire[31:0] reg2_data      ;
input wire[4:0]  write_reg_addr ;
input wire[31:0] write_reg_data ;

// Insert your solution below here.
	 
endmodule
