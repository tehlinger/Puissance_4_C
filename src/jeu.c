#include <jeu.h>

void lancer_partie(partie p, bool IA){
	
	int coup_joue;
	int a_qui_le_tour = 0;
	int personne_ne_gagne = 1;
	int qui_a_gagne;
	int ia_joue = 0;
	
	while(personne_ne_gagne){
		
		ia_joue = ((a_qui_le_tour == 1) && ( IA == 1));	//On regarde si l'IA joue à ce tour	
		
		if(ia_joue) coup_joue = choix_colonne_IA(p, IA);
		else coup_joue = demander_coup_joueur();
			
			if (coup_gagnant(coup_joue, a_qui_le_tour, p))
			{
				personne_ne_gagne = 0; //Si la partie se termine, on note le gagnant, on interrompt la boucle
				qui_a_gagne = a_qui_le_tour;
			}

		a_qui_le_tour = (a_qui_le_tour + 1) % 2;			
		jouer_pion(coup_joue, a_qui_le_tour, p);
		afficher_partie(p);
		
		
		}
		
	if ((IA == 1) && (qui_a_gagne)) printf("\n Tu as perdu.\n");
	else printf("Bravo joueur %d : tu as gagné!\n", qui_a_gagne);
}
		
			
