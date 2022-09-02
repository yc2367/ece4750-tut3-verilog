module top;

 // Declare single-bit logic variables. 4
	logic a;
	logic b;
	logic c;

	logic [ 11:0] A;
	logic [ 3:0]  B;
	logic [ 3:0]  C;
	logic [ 3:0]  D;

	logic [ 7:0]  E;
	logic [ 7:0]  F;
	logic [ 7:0]  G;

	initial begin
		a = 1'b0;   $display("1'b0    =  %x", a);
		a = 1'b1;   $display("1'b1    =  %x", a);
		a = 1'bx;   $display("1'bx    =  %x", a);
		a = 1'bz;   $display("1'bz    =  %x", a);

		a = 1'b0;
		b = 1'b1;

		c = a & b;  $display("0 & 1   =  %x", c);
		c = a | b;  $display("0 | 1   =  %x", c);
		c = a ^ b;  $display("0 ^ 1   =  %x", c);
		c = ~b;     $display("~1      =  %x", c);

		a = 1'b0;
		b = 1'bx;

		c = a & b;  $display("0 & x   =  %x", c);
		c = a | b;  $display("0 | x   =  %x", c);
		c = a ^ b;  $display("0 ^ x   =  %x", c);
		c = ~b;     $display("~x      =  %x", c);

		a = 1'b0;
		b = 1'b1;

		c = a && b; $display("0 && 1  =  %x", c);
		c = a || b; $display("0 || 1  =  %x", c);
		c = !b;     $display("!1      =  %x", c);
		
		A = 12'hca5; $display("12'hca5 = %x", A);
		A = 12'd1058; $display("12'd1058 = %x", A);
		
		B = 4'b1101;
		C = 4'b0011;
		D = B ^~ C; $display("0101 ^~ 0011 = %x", D);
		D = ^B;     $display("^1101 = %x",D);

		E = 8'b1110_0101;
		F = E << 1;  $display("1110_0101 << 1 = %b", F);
		F = E << 2;  $display("1110_0101 << 2 = %b", F);
		F = E >> 1;  $display("1110_0101 >> 1 = %b", F);
		F = E >> 2;  $display("1110_0101 >> 2 = %b", F);

		F = $signed(E) >>> 1;  $display("1110_0101 >>> 1 = %b", F);
		F = $signed(E) >>> 2;  $display("1110_0101 >>> 2 = %b", F);

		E = 8'b0110_0101;
		F = $signed(E) >>> 1;  $display("0110_0101 >>> 1 = %b", F);
		F = $signed(E) >>> 2;  $display("0110_0101 >>> 2 = %b", F);

		E = 8'd20;
		F = 8'd8;
		a = E==F; $display("200 + 1 = %d", a);
	end
endmodule
