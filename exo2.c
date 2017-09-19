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
	POINT U1, U2, I1, I2, O1, O2, P1, P2;
	g.y=400; d.y=400;
	U1.x=500; U2.y=400;
	I1.x=600; I2.y=400;
	O1.x=700; O2.y=400;
	P1.x=800; P2.y=400;
	draw_line(g,d,vert);
	draw_line(U1,U2,rouge);
	draw_line(I1,I2,bleu);
	draw_line(O1,O2,violet);
	draw_line(P1,P2,magenta);
	
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
	
	// PArtie 5
	
	bg.x = 100; bg.y = 150;
	hd.x = 150; hd.y = 200;
	hg.x = 100; hg.y = 200;
	bd.x = 150; bd.y = 150;
	
	draw_rectangle(bg, hd, bleu);
	draw_line(bg, hd, orange);
	draw_line(hg, bd, orange);
	
	
	
	
	

    
	
	wait_escape();
exit(0);
}
