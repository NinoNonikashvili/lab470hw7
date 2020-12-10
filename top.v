`timescale 1ns / 1ps
 module top(
	input clk, 	 
	output reg[6:0] led,
	output reg [3:0] anode, 
	output clk_out
    );

parameter integer max = 4000; 
	reg [14:0] counter = 0;
	reg slowclk_reg =0;
	reg [15:0] four_digit_input;
	always @(posedge clk) 
		begin
			counter <= counter + 1;
			if (counter == max) 
				begin
					counter <= 0;
					slowclk_reg <= !slowclk_reg; 
				end
		end

	assign clk_out = slowclk_reg;
	
	reg [1:0] enable_anode=0;
	

	always @(posedge clk_out)
		begin
	four_digit_input[15:12]=1;
	four_digit_input[11:8]=5;
	four_digit_input[7:4]=9;
	four_digit_input[3:0]=5;
			case(enable_anode)
				0: begin
							anode <= 4'b1110;  
							enable_anode <= 1;
							case(four_digit_input[15:12])
							 0: led = 7'b1000000; // "0"    //CG CF CE CD CC CB CA  //anodes 0 0 0 1
							 1: led = 7'b1111001; // "1" 
							 2: led = 7'b0100100; // "2" 
							 3: led = 7'b0110000; // "3" 
							 4: led = 7'b0011001; // "4" 
							 5: led = 7'b0010010; // "5" 
							 6: led = 7'b0100000; // "6" 
							 7: led = 7'b1111000; // "7" 
							 8: led = 7'b0000000; // "8"  
							 9: led = 7'b0010000; // "9" 
							 default: led = 7'b1000000; // "0"
							 endcase
						end
				1: begin
							anode <= 4'b1101; 
							enable_anode <= 2;
							case(four_digit_input[11:8])
							 0: led = 7'b1000000; // "0"    //CG CF CE CD CC CB CA  //anodes 0 0 0 1
							 1: led = 7'b1111001; // "1" 
							 2: led = 7'b0100100; // "2" 
							 3: led = 7'b0110000; // "3" 
							 4: led = 7'b0011001; // "4" 
							 5: led = 7'b0010010; // "5" 
							 6: led = 7'b0100000; // "6" 
							 7: led = 7'b1111000; // "7" 
							 8: led = 7'b0000000; // "8"  
							 9: led = 7'b0010000; // "9" 
							 default: led = 7'b1000000; // "0"
							 endcase
						end
				2: begin
							anode <= 4'b1011; 
							enable_anode <= 3;
							case(four_digit_input[7:4])
							 0: led = 7'b1000000; // "0"    //CG CF CE CD CC CB CA  //anodes 0 0 0 1
							 1: led = 7'b1111001; // "1" 
							 2: led = 7'b0100100; // "2" 
							 3: led = 7'b0110000; // "3" 
							 4: led = 7'b0011001; // "4" 
							 5: led = 7'b0010010; // "5" 
							 6: led = 7'b0100000; // "6" 
							 7: led = 7'b1111000; // "7" 
							 8: led = 7'b0000000; // "8"  
							 9: led = 7'b0010000; // "9" 
							 default: led = 7'b1000000; // "0"
							 endcase 
						end
				3: begin
							anode <= 4'b0111;   
							enable_anode <=0;
							case(four_digit_input[3:0])
							 0: led = 7'b1000000; // "0"    //CG CF CE CD CC CB CA  //anodes 0 0 0 1
							 1: led = 7'b1111001; // "1" 
							 2: led = 7'b0100100; // "2" 
							 3: led = 7'b0110000; // "3" 
							 4: led = 7'b0011001; // "4" 
							 5: led = 7'b0010010; // "5" 
							 6: led = 7'b0100000; // "6" 
							 7: led = 7'b1111000; // "7" 
							 8: led = 7'b0000000; // "8"  
							 9: led = 7'b0010000; // "9" 
							 default: led = 7'b1000000; // "0"
							 endcase
					end
			endcase
		end

endmodule
