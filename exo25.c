#include "uvsqgraphics.h"

int main()
{
	init_graphics(400,400);
	POINT p1,p2,p3,p4;
	
	p1.x = 250 ; p1.y = 250;
	p2.x = 150 ; p2.y = 150;
	
	int i;
	i=0;
	
	draw_rectangle(p1,p2,red);
	p3.x=p1.x +1;p3.y=p1.y+1;
	p4.x=p2.x-1;p2.x-1;
	
	while(i<10)
	{
		wait_clic();
		if (i%2 == 0)
		{
			draw_fill_rectangle(p1,p2,red);
			i=i+1;
		}
		else
		{
			draw_fill_rectangle(p3,p4,black);
			draw_rectangle(p1,p2,red);
			i=i+1;
		}
	}
	wait_escape();
	exit(0);
}
