`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:07:18 04/15/2019 
// Design Name: 
// Module Name:    fixedfloat 
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
module fixedfloat(
    input wire clk,
    input wire rst,
    input wire[31:0] targetnumber,
    input wire[4:0] fixpointpos,
    input wire opcode,
    output wire[31:0] result
    );
wire [31:0] floatresult; 
wire [31:0] fixresult; 
wire [31:0] targetnumber_b;
wire [4:0] fixpointpos_c;

integer i; 
integer count; 
reg sign =0; 
reg [7:0] exp; 
integer exp2;
reg[22:0]mantissa;
reg [31:0] temp; 

always @(*) begin 
targetnumber_b= targetnumber; 


// -------------------------------------------
// From fix to float (Part 1)
// -------------------------------------------
// Your  Implementation 

case (opcode) 
	1'b00: begin 
	



// -------------------------------------------	
// From float to fix (Part 2)
// -------------------------------------------
// Your  Implementation  

// -------------------------------------------	
// Register the results 
// -------------------------------------------

always @ ( posedge clk ) begin 
    // Synchronous reset
    result <= opcode == 1 ?  fixresult : floatresult ;

end 

endmodule
