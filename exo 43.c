#include "uvsqgraphics.h" 

int haut_ou_bas;
int gauche_ou_droite;
int OU_CA;

void qui_dit_ou_c_est(POINT p){
	if(p.y<300){
		haut_ou_bas = 0;	
	}
	else{
	haut_ou_bas = 1;
	}	
	if(p.x<450){
		gauche_ou_droite = 0;
	}
	else{
		gauche_ou_droite = 1;
	}
}

void calcul_OU_CA (){
	if(haut_ou_bas == 0 && gauche_ou_droite == 0){
		OU_CA = 0;
	}
	if(haut_ou_bas == 0 && gauche_ou_droite == 1){
		OU_CA = 1;
    }
    if(haut_ou_bas == 1 && gauche_ou_droite == 0){
		OU_CA = 2;
	}
	if(haut_ou_bas == 1 && gauche_ou_droite == 1){
		OU_CA = 3;
	}
}

void dessine_cercle_couleur(POINT centre){
	
	if(OU_CA == 0){
		draw_circle(centre,75,bleu);
	}
	if(OU_CA == 1){
		draw_circle(centre,75,rouge);
	}
	if(OU_CA == 2){
		draw_circle(centre,75,vert);
	}
	if(OU_CA == 3){
		draw_circle(centre,75,jaune);
	}
}

int main ()
{
	POINT p ;
int i;
init_graphics(900,600);
for (i=0 ; i<20 ; i++)
{
	 p = wait_clic();
     qui_dit_ou_c_est(p);
     calcul_OU_CA ();
     dessine_cercle_couleur(p);
}




wait_escape();
exit(0);
}
