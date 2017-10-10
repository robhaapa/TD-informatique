#include "uvsqgraphics.h"

int main()
{
init_graphics(900,600);

POINT p1,p2,p;
int i=0;

p1.x = 450; p1.y = 0;
p2.x = 450; p2.y = 600;
draw_line(p1,p2,white);
for(i=0;i<5;i++)

	{
	p = wait_clic();
	if (p.x<400)
	{
		draw_circle(p,50,red);
	}
	else
	{
		draw_circle(p,50,blue);
	}
}
	



wait_escape();
exit(0);
}
