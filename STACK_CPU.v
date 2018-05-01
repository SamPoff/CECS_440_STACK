`timescale 1ns / 1ps
/**********************************************************
16 bit instrucions. 
Opcode most signifigant 6 bits.
PUSH = 32'h0400_0000
POP  = 32'h0800_0000
ADD  = 32'h0C00_0000 000011 - 3
OR   = 32'h1000_0000 000100 - 4
SUB  = 32'h1400_0000 000101 - 5
SLT  = 32'h1800_0000 000110 - 6
NOR  = 32'h1C00_0000 000111 - 7
AND  = 32'h2000_0000 001000 - 8
IMM  = 32'hxxxx_xxxx
**********************************************************/
module STACK_CPU( 
   input clock,
   input reset,
   output zero,
   output result
   );
   
   wire [3:0]  alu_op;
   wire [31:0] instruction_32;
   wire [7:0]  pc_out;
   wire [31:0] data_out_1st;
   wire [31:0] data_out_2nd;
   wire [31:0] result; 
   
   // Instantiate PC.
   reg [31:0] pc_in;
   always@( posedge clock, posedge reset ) begin
      if( reset ) pc_in <= 32'b0; 
      else        pc_in <= pc_in + 32'b1;
   end
   PROGRAM_COUNTER pc( .clock( clock ),
                       .reset( reset ),
                       .pc_in( pc_in ),
                       .pc_out( pc_out ) );
   
   // Instantiate the instruction memory.
   INSTRUCTION_MEM_128x32 imem( .ReadAddress( pc_out ),
                                .Instruction( instruction_32 ) );
                                
   // Instantiate CU.
   CONTROL_UNIT cu( .clock( clock ),
                    .reset( reset ),
                    .opcode( instruction_32[31:26] ),
                    .push( push ),
                    .pop( pop ),
                    .alu_op( alu_op ) );
   
   // Instantiate the stack. 
   STACK stack( .clock( clock ),
                .reset( reset ),
                .push( push ),
                .pop( pop ),
                .data_in( { 16'b0, instruction_32[15:0] } ),
                .data_out_1st( data_out_1st ),
                .data_out_2nd( data_out_2nd ) );
                       
    // Instantiate ALU.
    ALU lau( .data_in_1st( data_out_1st ),
             .data_in_2nd( data_out_2nd ),
             .alu_op( alu_op ),
             .zero( zero ),
             .pop( pop_alu ),
             .result( result ) );
   

endmodule


