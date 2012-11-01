#include <stdio.h>
#include <stdlib.h>
#include <grille.h>
#include <i_o.h>
#include <verifications.h>
#include <aleatoire.h>
#include <time.h>
int main ()
{
	srand(time(NULL));					
	
	partie p;
	p=nouvelle_partie();
	int i;
	for(i=0;i<20;i++){
		int  rand_colonne = (alea(6))+1;
		int rand_joueur = (alea(1));
		jouer_pion(rand_colonne,rand_joueur,p);
	}
	
	
	afficher_partie(p);
	int acc_test = alignes_horizontalement(1,4,p);
	printf("\n%d", acc_test);
	free(p);

	return 1;
}
