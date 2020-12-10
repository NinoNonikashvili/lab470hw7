`timescale 1ns / 1ps
module clk_div(
input clk,
output  slowclock);

	 reg [18:0] counter=0;
	 reg reg_slowclock=0;
	 parameter [18:0] max=40; //8ms 50mhz:(1:8)=400000
	 
	 always @(posedge clk)
	 begin
	 counter<=counter+1;
	 if(counter==max)begin
	 reg_slowclock<=!reg_slowclock;
	 counter<=0;
	 end
	 end
	 
	 assign slowclock=reg_slowclock;


endmodule
