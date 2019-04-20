`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:05:00 04/20/2019
// Design Name:   fixedfloat
// Module Name:   /home/csmajs/taror002/Desktop/CS161L-master/Lab2/test_float_tb.v
// Project Name:  Lab2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fixedfloat
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_float_tb;

	// Inputs
	reg clk;
	reg rst;
	reg [31:0] targetnumber;
	reg [4:0] fixpointpos;
	reg opcode;

	// Outputs
	wire [31:0] result;
	reg [31:0] R; 

	// Instantiate the Unit Under Test (UUT)
	fixedfloat uut (
		.clk(clk), 
		.rst(rst), 
		.targetnumber(targetnumber), 
		.fixpointpos(fixpointpos), 
		.opcode(opcode), 
		.result(result)
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
opcode = 1'b00;
fixpointpos= 4'b0000; 
targetnumber = {32'h0}; 
R = {32'h0}; 
#100; 


opcode = 1'b00; 
fixpointpos = 5'b11001; 
targetnumber = {{12'b0011001_01000}, {20'h00000}} ;
R = 32'b0_10000011_10010100000000000000000;
#100; 
$display("TC10.... %h %h", R,result); 
if(R!=result) $display("Failed TC10...%h %h", R , result);
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

