`timescale 1ns / 1ps

//  Constant definitions 

module my_alu # ( parameter NUMBITS = 16 ) (
    input wire clk, 
    input wire reset ,  
    input  wire[NUMBITS-1:0] A, 
    input  wire[NUMBITS-1:0] B, 
    input wire [2:0]opcode, 
    output reg [NUMBITS-1:0] result,  
    output reg carryout ,
    output reg overflow , 
    output reg zero  );

// ------------------------------
// Insert your solution below
// ------------------------------ 

wire signed [NUMBITS-1:0] C;
wire signed [NUMBITS-1:0] D;
assign C = A; 
assign D = B; 
reg signed [NUMBITS-1:0] r; 
assign result = r; 

always @ * begin
	if(reset) 
		begin
			result =0; 
		end 
	else begin 
	carryout =0; 
	zero =0; 
	overflow = 0; 
	
	
	case (opcode) 
	      3'b000: begin 
			        r = A+B ; 
						if (result <A && r < B)begin 
						carryout =1; 
						end 
						else begin 
						carryout = 0 ;
						end 
					end 
			3'b001: begin 
						r = C + D; 
						if(C >= 0 && D>= 0 & & r < 0)
							begin 
								overflow =1; 
							end
						else if(C<0 && D<0 && r >=0)
							begin 
								overflow=1; 
							end
						else begin overflow =0; end 
					end 
						
			3'b010: begin 
			        r = A-B ; 
						if (r >A && r >B)begin 
						carryout =1; 
						end 
						else begin 
						carryout = 0 ;
						end 
					end 
			3'b011: begin 
						r = C - D; 
						if(C < 0 && D>= 0 & & r >= 0)
							begin 
								overflow =1; 
							end
						else if(C>=0 && D<0 && r < 0)
							begin 
								overflow=1; 
							end
						else begin overflow =0; end 
					end 
			3'b100: begin 
                     r = A & B	;
					  end 
			3'b101: begin 
							r = A | B; 
				     end 
			3'b110: begin
							r = A ^ B; 
					  end
			3'b111: begin 
							r = A>>>1; 
					  end 
			default: begin 
								r = -1; 
								zero= 0; 
								overflow = 0; 
						end
			endcase
			
			if(result ==0) 
				begin 
				   zero = 1; 
				end 
			else 
				begin 
				   zero =0; 
				end 
		end 
		end
	

endmodule
