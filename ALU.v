`timescale 1ns / 1ps

module ALU(
   input             clock,
   input             reset,
   input      [31:0] data_in,
   input      [ 3:0] alu_op,
   output            zero,
   output            pop,
   output            hold,
   output reg [31:0] result
   );
     
   /*******************************************
   State machine to control whether the stack
   is popping or not and the PC is incrementing
   or not.
   *******************************************/   
   reg [1:0] state;
   reg do_op;
   reg hold;
   reg store;
   reg pop;
   
   // Next state depends on input. 
   always@( posedge clock, posedge reset ) begin
      if( reset ) state <= 2'b0;
      else begin
         case( state )
            2'd0 : state <= ( alu_op ) ? 2'd1 : 2'd0;
            2'd1 : state <= ( alu_op ) ? 2'd2 : 2'd0;
            2'd2 : state <= ( alu_op ) ? 2'd0 : 2'd0;
         endcase
      end
   end
   
   // Output depends on state.
   always@( * ) begin
      case( state )
         2'd0 : { pop, hold, store, do_op } = 3'b0000;
         2'd1 : { pop, hold, store, do_op } = 3'b1100;
         2'd2 : { pop, hold, store, do_op } = 3'b1001;
      endcase
   end
   
   /*******************************************
   Normal alu stuff. 
   *******************************************/
   parameter ADD = 4'h3;
   
   reg [31:0] temp_reg;
   
   always@( posedge clock, posedge reset ) begin
      if( reset ) temp_reg <= 32'b0;   else
      if( store ) temp_reg <= data_in; else
      if( do_op ) begin
         case( alu_op )
            ADD : result <= temp_reg + data_in;
         endcase
      end
   end

   assign zero = ( result == 32'b0 ) ? 1'b1 : 1'b0;

endmodule
