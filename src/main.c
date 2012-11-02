#include <stdio.h>
#include <stdlib.h>
#include <grille.h>
#include <i_o.h>
#include <verifications.h>
#include <aleatoire.h>
#include <time.h>
int main ()
{	
	bool personne_ne_gagne, joueur = 1;
	partie p;
	int coup_joue;
	p = nouvelle_partie();
	
	do {
		coup_joue = demander_coup_joueur(p, joueur);
		personne_ne_gagne = !(coup_gagnant(coup_joue, joueur, p)); 
		jouer_pion(coup_joue, joueur, p);
		afficher_partie(p);
	} while(personne_ne_gagne);
	effacer_grille(p);
printf("BRAVO!");
	return 1;
}
