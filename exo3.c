#include <uvsqgraphics.h>

int main()
{
	init_graphics(900, 600);
	POINT a, b;
	POINT p, s;
	
	a.x = 450; a.y = 0;
	b.x = 450; b.y = 600;
	
	draw_line(a, b, white);
	
	p = wait_clic();
	s.x = 900 - p.x; s.y = p.y;
	
	if (p.x <= 450)
		draw_circle(s, 50, rouge);
	else
		draw_circle(s, 50, blue);
	
	wait_escape();
	exit(0);
}
	
	
