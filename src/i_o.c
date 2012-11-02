#include <i_o.h>
#include <grille.h>
#include <verifications.h>
#define NB_LIGNES_A_EFFACER 17

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
		

void effacer_grille(){
	 printf("\n\e[%dA",NB_LIGNES_A_EFFACER);
 }

bool demander_coup_joueur(partie p, bool joueur){
	bool coup_valide = -1;
	int indice = 0;
	printf("Rentrez l'indice de la colonne où jouer(entre 1 et 7, inclus):\n");//On lutte avec l'utilisateur pour qu'il rentre un indice de colonne correct
	do{
		scanf("%d", &indice);	
		coup_valide = ((indice>0)&&(indice<8));
	}while(!(coup_valide));
	
	return indice;
	}
	
	
	
	
	
	
	
