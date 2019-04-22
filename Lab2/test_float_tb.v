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
//Initial
opcode = 1'b00;
fixpointpos= 4'b0000; 
targetnumber = {32'h0}; 
R = {32'h0}; 
#100; 

	//Testcase1
	opcode = 1'b00; 
	fixpointpos = 5'b11001; 
	targetnumber = {{12'b0011001_01000}, {20'h00000}} ;
	R = 32'b0_10000011_10010100000000000000000;
	// Wait 100 ns for global reset to finish
	#100; 
	$display("TC10 Fix to float", R,result); 
	if(R!=result) $display("Result is wrong", R , result);	
	//Testcase2
        fixpointpos = 4'b0011; 
	targetnumber= {{24'h000000}, {8'b01100_101}}; 
	R = 32'b0__10000010_10010100000000000000000;
	#100;
	$display("TC11 Fix to float", R,result); 
	if(R!=result) $display("Result is wrong", R , result);
	//Testcase3
	fixpointpos = 4'b0100;
	targetnumber = { {24'h000000}, {8'b0110_0101}  } ; 
	R = 32'b0_10000001_10010100000000000000000;
	#100;
	$display("TC12 Fix to float", R,result); 
	if(R!=result) $display("Result is wrong", R , result);
	//Testcase4  512
	fixpointpos = 5'b0001;
	targetnumber = {{20'h00000}, {12'h400}}; 
	R = 32'b0_10001000_00000000000000000000000;
	#100;
	$display("TC13 Fix to float", R,result); 
	if(R!=result) $display("Result is wrong", R , result);
	
	//Float to fix
	opcode = 1'b01; 
	//Testcase 01 
	fixpointpos = 5'b11001; 
	targetnumber= 32'b0_10000011_10010100000000000000000;
	R  = {{12'b0011001_01000}, {20'h00000}};
	#100; 
	$display("TC20 Float to fix", R,result); 
	if(R!=result) $display("Result is wrong", R , result);
	// TestCase 02 
	fixpointpos = 4'b0011;
	targetnumber = 32'b0_10000010_10010100000000000000000; 
	R = {{24'h000000},{8'b01100_101}};
	#100;
	$display("TC21 Float to fix", R,result); 
	if(R!=result) $display("Result is wrong", R , result);
	//testcase03 
	fixpointpos = 4'b0100;
	targetnumber = 32'b0_10000001_10010100000000000000000;
	R = {{24'h000000},{8'b0110_0101}}; 
	#100;
	$display("TC22 Float to fix", R,result); 
	if(R!=result) $display("Result is wrong", R , result);
	//testcase04 
	fixpointpos = 5'b0001;
	targetnumber = 32'b0_10001000_00000000000000000000000 ;
	R = {{20'h00000},{12'h400}} ;  
	$display("TC23 Float to fix", R,result); 
	if(R!=result) $display("Result is wrong", R , result);
	end
      
endmodule

