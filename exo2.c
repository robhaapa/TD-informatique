#include "uvsqgraphics.h"

int main()
{
	init_graphics(900,600);
	
	POINT g;
	POINT d;
	
	g.x= 100; g.y= 300;
	d.x= 800; d.y= 300;
	draw_line(g,d,rouge);
	
	draw_circle(g,100,bleu);
	draw_circle(d,100,vert);
	
	POINT m;
	
	m.x= 450; m.y= 300;
	draw_circle(m,100,magenta);
	
	
	//Partie 2
	
	g.y=400; d.y=400;
	draw_line(g,d,vert);
	
	//Partie 3 (exo 2)
	POINT bg;
	POINT hd;
	
	bg.x=20; bg.y=20;
	hd.x=220; hd.y=120;
	
	draw_rectangle(bg,hd,blanc);
	
	//Partie 4 
	
	POINT bd, hg;
	bg.x= 200; bg.y= 200;
	bd.x=300; bd.y=200;
	hg.x=200; hg.y=300;
	hd.x=300; hd.y=300;
	
	draw_line(bg, bd, bleu);
	draw_line(bd, hd, rouge);
	draw_line(hd, hg, vert);
	draw_line(hg, bg, jaune);
	
	POINT a,b;
	
	a.x=100; a.y= 150;
	b.x=150; b.y= 200;
	
	draw_line(a,b,rouge);
	// Exercice 3
	
	
	
	

    
	
	wait_escape();
exit(0);
}
