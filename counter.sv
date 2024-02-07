module counter
(
	input 	logic 		clk,
	input 	logic 		rst,

	input 	logic 		enable,
	input 	logic 		sel,

	output 	logic 	[3:0]	out
);

always @(posedge clk or posedge rst)
begin
	if (rst)
	begin
		out <= 0;
	end
	else if (enable)
	begin
		out <= (sel) ?	out - 1 :
				out + 1;
	end
end

endmodule
