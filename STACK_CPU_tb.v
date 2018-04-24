`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:34:33 04/24/2018
// Design Name:   STACK_CPU
// Module Name:   C:/Users/Sam/Desktop/440/Stack_CPU/STACK_CPU_tb.v
// Project Name:  Stack_CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: STACK_CPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module STACK_CPU_tb;

	// Inputs
	reg clock;
	reg reset;

   //reg [31:0] IM [0:127];

	// Instantiate the Unit Under Test (UUT)
	STACK_CPU uut (
		.clock(clock), 
		.reset(reset)
	);
   
   always #5 clock = ~clock;

	initial begin
		// Initialize Inputs
		clock = 0;
		reset = 1;
      uut.imem.IM[0] = 32'h0400_0000;
      uut.imem.IM[1] = 32'h0800_0000;
      uut.imem.IM[2] = 32'h0C00_0000;

		// Wait 100 ns for global reset to finish
		#100;
      reset = 0;
        
		// Add stimulus here
      #100;
      
      $stop;

	end
      
endmodule
