`timescale 1ns / 1ps

module myalutb;

	parameter NUMBITS = 8 ;

	// Inputs
	reg clk ;
	reg reset ; 
	reg [NUMBITS-1:0] A;
	reg [NUMBITS-1:0] B;
	reg [2:0] opcode;

	// Outputs
	
	wire [NUMBITS-1:0] result;
	reg [NUMBITS-1:0] R ;
	wire carryout;
	wire overflow;
	wire zero;

   // -------------------------------------------------------
	// Instantiate the Unit Under Test (UUT)
	// -------------------------------------------------------
	
	my_alu #(NUMBITS) uut (
	   .clk(clk),
		.reset(reset) ,  
		.A(A), 
		.B(B), 
		.opcode(opcode), 
		.result(result), 
		.carryout(carryout), 
		.overflow(overflow), 
		.zero(zero)
	);

  	initial begin 
	
	 clk = 0 ; reset = 1 ; #50 ; 
	 clk = 1 ; reset = 1 ; #50 ; 
	 clk = 0 ; reset = 0 ; #50 ; 
	 clk = 1 ; reset = 0 ; #50 ; 
		 
	 forever begin 
		clk = ~clk; #50 ; 
	 end 
	 
	end 
	
	initial begin
		
		// ---------------------------------------------
		// Testing unsigned additions 
		// --------------------------------------------- 
		opcode = 3'b000 ; 
		
		A = 8'h01 ;
   	        B = 8'h00 ;
		R = 8'h01 ; 
		
	         #100 ; // Wait 
     //1+0 = 1
		$display("TC11 Unsigned Add ");
		if (R != result) $display  ("Result is wrong");
		if (zero != 1'b0) $display ("Zero  is wrong");
		if (carryout != 1'b0) $display ("Carryout is wrong");
		
		A = 8'hff ;
   		B = 8'h01 ;
		R = 8'h00 ;
		//255+1=256
		//11111111+1 = 00000000 + 1 carryout 
	    #100 ; // Wait 
     
		$display("TC12 Unsigned Add ");
		if (R != result) $display  ("Result is wrong");
		if (zero != 1'b1) $display ("Zero  is wrong");
		if (carryout != 1'b1) $display ("Carryout is wrong");
		
		A = 8'h0f ;
   		B = 8'hf0 ;
		R = 8'hff ; 
		
		//15+240 = 255
	    #100 ; // Wait 
     
		$display("TC13 Unsigned Add ");
		if (R != result) $display  ("Result is wrong");
		if (zero != 1'b0) $display ("Zero  is wrong");
		if (carryout != 1'b0) $display ("Carryout is wrong");
		
		
		// ---------------------------------------------
		// Testing unsigned subs 
		// --------------------------------------------- 

       opcode= 3'b010; 
		 A = 8'h00 ;
   	 	 B = 8'h00 ;
		 R = 8'h00 ; 
		
	    #100 ; // Wait 
	    //0-0= 0 
     
		$display("TC14 Unsigned subs ");
		if (R != result) $display  ("Result is wrong");
		if (zero != 1'b1) $display ("Zero  is wrong");
		if (carryout != 1'b0) $display ("Carryout is wrong");
		
		 A = 8'hff ;
   	         B = 8'hff ;
		 R = 8'h00 ; 
		//255-255=0
	    #100 ; // Wait 
     
		$display("TC15 Unsigned subs ");
		if (R != result) $display  ("Result is wrong");
		if (zero != 1'b1) $display ("Zero  is wrong");
		if (carryout != 1'b0) $display ("Carryout is wrong");
		
		 A = 8'h1f ;
   	         B = 8'h0f ;
		 R = 8'h10 ; 
		//31-15
	    #100 ; // Wait 
     
		$display("TC16 Unsigned subs ");
		if (R != result) $display  ("Result is wrong");
		if (zero != 1'b0) $display ("Zero  is wrong");
		if (carryout != 1'b0) $display ("Carryout is wrong");
		
		
		// ---------------------------------------------
		// Testing signed adds 
		// --------------------------------------------- 
		opcode = 3'b001; 
		//10+1=11
		A=8'h0A;
		B=8'h01;
		R=8'h0B;
		
		#100; 
		$display("TC17 signed adds ");
		if (R != result) $display  ("Result is wrong");
		if (zero != 1'b0) $display ("Zero  is wrong");
		if (overflow != 1'b0) $display ("Overflow is wrong");
		
		A=8'hAE;
		B=$signed(~({8'hAE}))+$signed(2'b01);
		R=8'h00;
		
		#100; 
		$display("TC18 signed adds ");
		if (R != result) $display  ("Result is wrong");
		if (zero != 1'b1) $display ("Zero  is wrong");
		if (overflow != 1'b0) $display ("Carryout is wrong");
		
		A = $signed(~({8'h08})) + $signed(2'b01);
   		B = $signed(~({8'h07})) + $signed(2'b01);
		R = $signed(~({8'h0f})) + $signed(2'b01);
		
		#100;
		$display("TC19 Signed adds ");
		if (R != result) $display  ("Result is wrong");
		if (zero != 1'b0) $display ("Zero  is wrong");
		if (overflow != 1'b0) $display ("Overflow is wrong");
		
		A = $signed(~({8'h08})) + $signed(2'b01);
   		B = $signed(({8'h07})) ;
		R = $signed(~({8'h01})) + $signed(2'b01);
		
		#100;
		$display("TC20 Signed adds ");
		if (R != result) $display  ("Result is wrong");
		if (zero != 1'b0) $display ("Zero  is wrong");
		if (overflow != 1'b0) $display ("Overflow is wrong");
		
		
		// ---------------------------------------------
		// Testing signed subs 
		// --------------------------------------------- 
		opcode = 3'b011;
		
		A = $signed({8'h08});
		B = $signed(~({8'h08})) + $signed(2'b01);
		R = 8'h10;
		#100
		$display("TC21 Signed subs ");
		if (R != result) $display  ("Result is wrong");
		if (zero != 1'b0) $display ("Zero  is wrong");
		if (overflow != 1'b0) $display ("Overflow is wrong");
		
		
		A = $signed({8'h08});
	        B = $signed({8'h08});
		R = 8'h00;
		#100
		$display("TC22 Signed subs ");
		if (R != result) $display  ("Result is wrong");
		if (zero != 1'b1) $display ("Zero  is wrong");
		if (overflow != 1'b0) $display ("Overflow is wrong");
		
		A = $signed({8'h08});
		B = $signed({8'h01});
		R = 8'h07;
		#100
		$display("TC23 Signed subs ");
		if (R != result) $display  ("Result is wrong");
		if (zero != 1'b0) $display ("Zero  is wrong");
		if (overflow != 1'b0) $display ("Overflow is wrong");
		
		A = $signed(~({8'h40})) + $signed(8'h01); 
		B = $signed({8'h41}) ; 
		R = $signed({8'h7f}); 
		
		#100;
		$display("TC24 Signed subs ");
		if (R != result) $display  ("Result is wrong %h %h " , R, result);
		if (zero != 1'b0) $display ("Zero  is wrong");
		if (overflow != 1'b1) $display ("Overflow is wrong");
		
		
		// ---------------------------------------------
		// Testing ANDS 
		// --------------------------------------------- 
		opcode= 3'b100; 
		A=8'h00;
		B=8'hff;
		R=8'h00;
		#100
		$display("TC25 Ands");
		if (R != result) $display  ("Result is wrong %h %h " , R, result);
		if (zero != 1'b1) $display ("Zero  is wrong");
		if (overflow != 1'b0) $display ("Overflow is wrong");
		if (carryout != 1'b0) $display ("Carryout is wrong");
		
		A=8'h0f;
		B=8'hff;
		R=8'h0f;
		#100
		$display("TC26 Ands");
		if (R != result) $display  ("Result is wrong %h %h " , R, result);
		if (zero != 1'b0) $display ("Zero  is wrong");
		if (overflow != 1'b0) $display ("Overflow is wrong");
		if (carryout != 1'b0) $display ("Carryout is wrong");
		
		
		
		// ----------------------------------------
		// ORs 
		// ---------------------------------------- 
		opcode = 3'b101; 
		A=8'h00;
		B=8'hff;
		R=8'hff;
		$display("TC27 or");
		#100
		if (R != result) $display  ("Result is wrong %h %h " , R, result);
		if (zero != 1'b0) $display ("Zero  is wrong");
		if (overflow != 1'b0) $display ("Overflow is wrong");
		if (carryout != 1'b0) $display ("Carryout is wrong");
		
		A=8'h1f;
		B=8'h0f;
		R=8'h1f;
		#100
		$display("TC28 or");
		if (R != result) $display  ("Result is wrong %h %h " , R, result);
		if (zero != 1'b0) $display ("Zero  is wrong");
		if (overflow != 1'b0) $display ("Overflow is wrong");
		if (carryout != 1'b0) $display ("Carryout is wrong");
		// ----------------------------------------
		// XORs 
		// ---------------------------------------- 
		opcode = 3'b110;
		
		A=8'h0f;
		B=8'hf0;
		R=8'hff;
		#100
		$display("TC29 xor");
		if (R != result) $display  ("Result is wrong %h %h " , R, result);
		if (zero != 1'b0) $display ("Zero  is wrong");
		if (overflow != 1'b0) $display ("Overflow is wrong");
		if (carryout != 1'b0) $display ("Carryout is wrong");
		
		
		A=8'hff;
		B=8'hff;
		R=8'h00;
		#100
		$display("TC30 xor");
		if (R != result) $display  ("Result is wrong %h %h " , R, result);
		if (zero != 1'b1) $display ("Zero  is wrong");
		if (overflow != 1'b0) $display ("Overflow is wrong");
		if (carryout != 1'b0) $display ("Carryout is wrong");


		// ----------------------------------------
		// Div 2 
		// ----------------------------------------
		
		opcode = 3'b111;
		A = 8'h10 ; 
		R = 8'h08 ; 
		#100;
		$display("TC31 Div");
		if (R != result) $display  ("Result is wrong %h %h " , R, result);
		if (zero != 1'b0) $display ("Zero  is wrong");
		if (overflow != 1'b0) $display ("Overflow is wrong");
		if (carryout != 1'b0) $display ("Carryout is wrong");
		
		A = 8'hFF ; 
		R = 8'h7F ; 
		#100;
		$display("TC32 Div");
		if (R != result) $display  ("Result is wrong %h %h " , R, result);
		if (zero != 1'b0) $display ("Zero  is wrong");
		if (overflow != 1'b0) $display ("Overflow is wrong");
		if (carryout != 1'b0) $display ("Carryout is wrong");
		
	end
      
endmodule
