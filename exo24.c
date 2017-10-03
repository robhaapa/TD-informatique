#include "uvsqgraphics.h"

int main()
{
	int taille;
	taille=200; 
	init_graphics(taille,taille);
	
	POINT p1;
	p1.x=100; p1.y=100;
	
	int r;
	r = 10;
	
	while (r <= taille/2)
	{
		draw_circle(p1,r,red);
		r=r+10;
	}
	wait_escape();
	exit(0);
}
	
	
