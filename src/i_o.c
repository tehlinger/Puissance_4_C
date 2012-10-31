#include <i_o.h>
#include <grille.h>


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
	
	for( i =0; i < LARGEUR; i++){
		if ((((p->grille)[i])->h) < hauteur)
			printf("   |");
			
			else{
				if ((((p->grille)[i])->valeurs[hauteur]) == 1)
					printf(" X |");
					else printf (" O |");
				}
			}
		printf("\n");
	}

void afficher_partie (partie p){
	int i;
	tracer_ligne(LARGEUR);
	
	for (i=HAUTEUR; i>0; i--){
		remplir_ligne(i, p);
		tracer_ligne(LARGEUR);
	}
	printf("\n");
}
		
