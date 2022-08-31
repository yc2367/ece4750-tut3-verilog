module top;

 // Declare single-bit logic variables. 4
	logic a;
	logic b;
	logic c;
	initial begin 
		a = 1'b0;   $display("1'b0    =  %x", a);
		a = 1'b1;   $display("1'b0    =  %x", a);
		a = 1'bx;   $display("1'b0    =  %x", a);
		a = 1'bz;   $display("1'b0    =  %x", a);

		a = 1'b0;
		b = 1'b1;

		c = a & b;  $display("0 & 1   =  %x", c);
		c = a | b;  $display("0 | 1   =  %x", c);
		c = a ^ b;  $display("0 ^ 1   =  %x", c);
		c = ~b;     $display("~1      =  %x", c);

		a = 1'b0;
		b = 1'bx;

		c = a & b;  $display("0 & 1   =  %x", c);
		c = a | b;  $display("0 | 1   =  %x", c);
		c = a ^ b;  $display("0 ^ 1   =  %x", c);
		c = ~b;     $display("~1      =  %x", c);

		a = 1'b0;
		b = 1'b1;

		c = a && b; $display("0 && 1  =  %x", c);
		c = a || b; $display("0 || 1  =  %x", c);
		c = !b;     $display("!1      =  %x", c);
	end
endmodule