`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:51:52 04/21/2018
// Design Name:   STACK
// Module Name:   C:/Users/Sam/Desktop/440/Stack_CPU/STACK_tb.v
// Project Name:  Stack_CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: STACK
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module STACK_tb;

	// Inputs
	reg clock;
	reg reset;
	reg push;
	reg pop;
   reg pop_alu;
   reg enable;
	reg [31:0] data_in;

	// Outputs
	wire [31:0] data_out;

	// Instantiate the Unit Under Test (UUT)
	STACK uut (
		.clock(clock), 
		.reset(reset), 
		.push(push), 
      .enable(enable),
		.pop(pop), 
      .pop_alu(pop_alu),
		.data_in(data_in), 
		.data_out(data_out)
	);

   always #5 clock = ~clock;

	initial begin
		// Initialize Inputs
		clock = 0;
		reset = 1;
		push = 0;
		pop = 0;
      pop_alu = 0;
      enable = 1;
		data_in = 0;

		// Wait 100 ns for global reset to finish
		#5;
      reset = 0;
        
		// Add stimulus here
      #10;
      push = 1;
      data_in = 32'hAAAA_0000;
      
      #10;
      push = 1;
      data_in = 32'hBBBB_0000;
      
      #10;
      push = 1;
      data_in = 32'hCCCC_0000;
      
      #10;
      push = 1; 
      data_in = 32'hDDDD_0000;
      
      #10;
      push = 0;
      pop = 0;
      #10;
      
      #10;
      push = 0;
      
      #10;
      pop = 1;
      
      #10;
      pop = 1;
      
      #10;
      pop = 1;
      
      #10;
      pop = 1;
      
      #10;
      pop = 1;
       
      $stop;

	end
      
endmodule

