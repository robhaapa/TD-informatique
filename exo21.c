#include "uvsqgraphics.h"

int main()
{
	init_graphics(900,600);
	
	POINT p1, p2;
	
	p1.x = 0; p1.y = 0;
	p2.x = 0; p2.y = 600;
	
	while(p1.x < 900)
	{
		draw_line(p1, p2, white);
		p1.x = p2.x + 100; p1.y = 0;
		p2.x = p1.x; p2.y = 600;
	}
	wait_escape();
	exit(0);
}
		
