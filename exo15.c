#include <uvsqgraphics.h>

int main()
{
	init_graphics(900, 600);
	POINT a, b;
	a.x = 450; a.y = 0;
	b.x = 450; b.y = 600;
	
	draw_line(a, b, white);
	
	POINT wc, wc2;
	
	wc = wait_clic(1);
	wc2 = wait_clic(2);
	
	
	if((wc.x < 450 && wc2.x > 450) || (wc.x > 450 && wc2.x < 450))
		
	{
		draw_line(wc, wc2, red);
	}
	else
	{
		draw_line(wc, wc2, blue);
	}
		
	wait_escape();
	exit(0);
	
	
}
