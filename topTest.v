`timescale 1ns / 1ps

module topTest;

	// Inputs
	reg clk;


	// Outputs
	wire [6:0] led;
	wire [3:0] anode;
	wire clk_out;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.led(led), 
		.anode(anode),
		.clk_out(clk_out)
	);
	always #5 clk=!clk;

	initial begin
		// Initialize Inputs
		clk = 0;
			
		


	end
      
endmodule

