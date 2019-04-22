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
    output reg[31:0] result
    );
reg [31:0] floatresult; 
reg [31:0] fixresult; 
reg [31:0] a;
reg [4:0] b;

integer i; 
integer count; 
reg sign =0; 
reg [7:0] exp; 
integer exp2;
reg[22:0]fraction;
reg [31:0] temp; 

always @(*) begin 
a= targetnumber; 
b = fixpointpos; 
floatresult= 32'h0;
fixresult=32'h0; 

// -------------------------------------------
// From fix to float (Part 1)
// -------------------------------------------
// Your  Implementation 

case (opcode) 
	1'b00: 
begin 
	if (a[31]==1)
	begin 
		sign= 1'b1; 
		a=-a; 
	end 
	for (i=0; i<31; i=i+1) 
	begin
		if(targetnumber[i]==1) 
		begin 
			count =i; 
		end
	end 
	exp = (count - b) +127; 
	
	a= a <<(31-count); 
	fraction = a [31:8] ; 
	 floatresult = {{sign},{exp},{fraction}}; 
end 
// -------------------------------------------	
// From float to fix (Part 2)
// -------------------------------------------
// Your  Implementation  

1'b01:
begin 
 sign = a[31]; 
 exp2= a[30:23]-127; 
 fraction = a[22:0];
 count= 23-(exp2+b); 
  if (count>0)
  begin 
	temp = temp >> count; 
  end 
  else if (count <=0)
  begin 
	temp = temp<<-count ;
  end 
  if (sign == 1'b1)
  begin 
	temp=-temp;
  end 
  
  fixresult= temp; 
  
  end 
  
 endcase
 end
	




// -------------------------------------------	
// Register the results 
// -------------------------------------------

always @ ( posedge clk ) begin 
    // Synchronous reset
	 if (rst==1'b1)
	 begin 
		result <= 32'h0; 
	 end
    result <= opcode == 1 ?  fixresult : floatresult ;

end 

endmodule
