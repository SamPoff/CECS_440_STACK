`timescale 1ns / 1ps
/**********************************************************
16 bit instrucions. 
Opcode most signifigant 6 bits.
PUSH = 32'h0400_0000
POP  = 32'h0800_0000
ADD  = 32'h0C00_0000
OR   = 32'h1000_0000
ADD  = 32'h1100_0000
SUB  = 32'h1400_0000
SLT  = 32'h1800_0000
NOR  = 32'h1C00_0000
IMM  = 32'hxxxx_xxxx
**********************************************************/
module CONTROL_UNIT(
   input        clock,
   input        reset,
   input  [5:0] opcode,
   output       push,
   output       pop,
   output [3:0] alu_op
   );
   
   reg push;
   reg pop;
   reg alu_op;

   always@( * ) begin
      case( opcode )
         4'd1 : { push, pop, alu_op } = 7'b10_0000;
         4'd2 : { push, pop, alu_op } = 7'b01_0000;
         4'd3 : { push, pop, alu_op } = 7'b00_0011;
      endcase
   end

endmodule
