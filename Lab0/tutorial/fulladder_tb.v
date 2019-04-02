`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:47:39 04/01/2019
// Design Name:   fulladder
// Module Name:   /home/csmajs/taror002/tutorial/fulladder_tb.v
// Project Name:  tutorial
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fulladder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module fulladder_tb;

	// Inputs
	reg A;
	reg B;
	reg Cin;

	// Outputs
	wire Sum;
	wire Cout;

	// Instantiate the Unit Under Test (UUT)
	fulladder uut (
		.A(A), 
		.B(B), 
		.Cin(Cin), 
		.Sum(Sum), 
		.Cout(Cout)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		Cin = 1'b0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		A = 0;
		B = 1;
		Cin = 1'b0; #100;
 
    	A = 1;
		B = 0;
		Cin = 1'b0; #100;
  
 	   A = 1;
		B = 1;
		Cin = 1'b0; #100;
 
    	A = 0;
		B = 0;
		Cin = 1'b1; #100;
		
		A = 0;
		B = 1;
		Cin = 1'b1; #100;
 
    	A = 1;
		B = 0;
		Cin = 1'b1; #100;
  
 	   A = 1;
		B = 1;
		Cin = 1'b1; #100;
 

	end
      
endmodule

