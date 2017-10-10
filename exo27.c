#include "uvsqgraphics.h"

int main()
{
	POINT p1,p2;
COULEUR coul;
init_graphics(600,600);
p1.x = 100;
p2.x = 600;
for(p1.x =100; p1.x < 600;p1.x = p1.x + 100)
{
p2.x = p1.x;
if((p1.x/100)%2 == 0)
coul = rouge;
else
coul = bleu;
draw_line(p1,p2,coul);
}
	

 wait_escape();
 exit(0);


}
