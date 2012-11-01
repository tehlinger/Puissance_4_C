#include <i_o.h>
#include <grille.h>
#include <verifications.h>


void tracer_ligne( int largeur ){
	int i;
	printf("|");
	for (i=0; i<LARGEUR; i++)
	{
		printf("---|");
	}
	printf("\n");
}

void remplir_ligne(int hauteur, partie p){
	int i;
	printf("|");
	
	for( i =1; i <= LARGEUR; i++){
		int case_etudiee = contenu_case (i, hauteur, p);
		if (case_etudiee == -1) printf("   |");
		else if (case_etudiee  == 0) printf(" O |");
		else printf (" X |");
			}
		printf("\n");
	}

void afficher_partie (partie p){
	printf("\n");
	int i;
	tracer_ligne(LARGEUR);
	
	for (i=HAUTEUR; i>0; i--){
		remplir_ligne(i, p);
		tracer_ligne(LARGEUR);}
		printf(" ");
	for (i=1;i<8;i++)
	printf(" %d  ",i);
	printf("\n");
}
		

