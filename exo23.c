#include "uvsqgraphics.h"

int main()
{
	init_graphics(900,600);
	POINT p1,p2;
	int delta;
	delta=lire_entier_clavier();
	
	p1.x=0; p1.y=0;
	p2.x=0; p2.y=HEIGHT;
	
	while (p1.x <= WIDTH)
	{
		draw_line(p1,p2,blanc);
		p1.x=p1.x + delta;
		p2.x = p1.x;
	}
	p1.x=0;p1.y=0;
	p2.x=WIDTH;p2.y=0;
	
	while (p1.y<=HEIGHT)
	{
		draw_line(p1,p2,blanc);
		p1.y=p1.y + 100;
		p2.y=p1.y;
	}
		
	
	wait_escape();
	exit(0);
}
	
