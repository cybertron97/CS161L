`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:43:35 04/01/2019 
// Design Name: 
// Module Name:    fulladder 
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
module fulladder(
    input A,
    input B,
    input Cin,
    output Sum,
    output Cout
    );

wire s1, t1, t2, t3;

xor x1 (s1, A, B);
xor x2 (Sum, s1, Cin);
and a1 (t3, A, B);
and a2 (t2, A, Cin);
and a3 (t1, B, Cin);
or o1 (Cout, t1, t2, t3);

endmodule

