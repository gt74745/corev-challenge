module top ();

logic clk;
logic rst;
logic enable;
logic sel;
logic [3:0] out;


initial
begin
	clk = 0;
	rst = 0;
	enable = 1;
	sel = 0;

	$dumpfile("wave.vcd");
	$dumpvars(0, top);
end

always #10 clk <= ~clk;

initial
begin
	#26 rst = 1;
	#71 rst = 0;
	#122 sel = 1;
	#70 enable = 0;
	#141 enable = 1;
	#100 sel = 0;
	#100 $finish;
end

counter ctr
(
	.clk(clk),
	.rst(rst),

	.enable(enable),
	
	.sel(sel),

	.out(out)
);

endmodule
