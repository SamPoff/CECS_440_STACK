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
module STACK_CPU( 
   input clock,
   input reset
   );
   
   wire [15:0] data_out;
   wire [3:0]  alu_op;
   wire [31:0] instruction_32;
   wire [7:0] pc_out;
   
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
                .pop_alu( pop_alu ),
                .data_in( instruction_32[15:0] ),
                .data_out( data_out ) );
                       
    ALU lau( .clock( clock ),
             .reset( reset ),
             .data_in( data_out ),
             .alu_op( alu_op ),
             .zero( zero ),
             .pop( pop_alu ),
             .hold( hold ),
             .result( result ) );
   

endmodule


