#include <uvsqgraphics.h>

int main()
{
	init_graphics(1500, 1000);
	POINT P1, P2, P3;
	POINT L1, L2, L3, L4, L5;
	POINT M1, M2, M3, M4, M5;
	
	P1.x = 100; P1.y = 300;
	P2.x = 150; P2.y = 300;
	P3.x = 200; P3.y = 300;
	
	L1.x = 400; L1.y = 350;
	L2.x = 400; L2.y = 450;
	L3.x = 400; L3.y = 550;
	L4.x = 400; L4.y = 650;
	L5.x = 400; L5.y = 750;
	
	M1.x = 700; M1.y = 350;
	M2.x = 700; M2.y = 450;
	M3.x = 700; M3.y = 550;
	M4.x = 700; M4.y = 650;
	M5.x = 700; M5.y = 750;
	
	draw_line(P1, P3, pink);
	draw_circle(P1, 25, silver);
	draw_circle(P2, 25, gold);
	draw_circle(P3, 25, violet);
	
	draw_line(L1, M1, blue);
	draw_line(L2, M2, orange);
	draw_line(L3, M3, brown);
	draw_line(L4, M4, yellow);
	draw_line(L5, M5, pink);
	
	
	wait_escape();
	return(0);
}
	
	
	
