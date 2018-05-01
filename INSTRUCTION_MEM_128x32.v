`timescale 1ns / 1ps
//*******************************************************//
// This document contains information proprietary        //
// to the CSULB student that created the                 //
// file - any reuse without adequate approval and        //
// documentation is prohibited                           //
//                                                       //
// Class:      <CECS 440>                                //
// Project:    <MIPS_Core>                               //
// File name:  IMEM_128x8.v                              //
//                                                       //
// Created by <Jose Sotelo> on <March 15, 2018>          // 
//                                                       //
// Team: Jose S., Jose P. and Sam P.                     //
//                                                       //
// In submitting this file for class work at CSULB       //
// I am confirming that this is my work and the work     //
// of no one else.                                       // 
//                                                       //
// In the event other code source are utilized I will    //
// document which portion of code and who is the author  //
//                                                       //
// In submitting this code I acknowledge that plagiarism //
// in student project work is subject to dismissal from  //
// the class                                             //
//*******************************************************//
/**********************************************************
16 bit instrucions. 
PUSH = 32'h0000_0001
POP  = 32'h0000_0002
ADD  = 32'h0000_0003
OR   = 32'h0000_0004
ADD  = 32'h0000_0005
SUB  = 32'h0000_0006
SLT  = 32'h0000_0007
NOR  = 32'h0000_0008
IMM  = 32'hxxxx_xxxx
**********************************************************/
module INSTRUCTION_MEM_128x32(
   input  [7:0 ] ReadAddress, 
   output [31:0] Instruction
   );
     
   reg [31:0] IM [127:0];
     
   assign Instruction = IM[ ReadAddress ];

endmodule
