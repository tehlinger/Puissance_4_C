#include <jeu.h>


partie annuler_coups(partie p){
	int i;

	for (i=((nb_etapes(p) <= 1)?2:0); i<2; i++)
		retirer_pion(p);
	return p;
}
	



void lancer_partie(partie p){
	printf("\n\nJouer contre une intelligence artificielle?(O/N)\n");
	char resultat;
	
	do {
		resultat = getchar();
	}while ((resultat != 'O') && (resultat != 'N'));
	int IA;
	IA = (resultat == 'O');
	int coup_joue;
	int a_qui_le_tour = 0;
	int personne_ne_gagne = 1;
	int qui_a_gagne;
	int ia_joue = 0;
	
	while(personne_ne_gagne){
		
		ia_joue = ((a_qui_le_tour == 1) && ( IA == 1));	//On regarde si l'IA joue à ce tour	
		
		if(ia_joue) coup_joue = choix_colonne_IA(p, IA);
		else coup_joue = demander_coup_joueur();//La personne qui doit jouer joue
		
		
		if ((coup_joue > 0) && (coup_joue < 8))
		{
			if (coup_gagnant(coup_joue, a_qui_le_tour, p))
				{
					personne_ne_gagne = 0;
					qui_a_gagne = a_qui_le_tour;
				}
			jouer_pion(coup_joue, a_qui_le_tour,p);
			a_qui_le_tour = (a_qui_le_tour + 1) %2;
			if ((a_qui_le_tour == 0) && (IA == 1))afficher_partie(p);
		}	
			
		else
		{
		switch (coup_joue)
		{
			case ('u' - '0') : p=annuler_coups(p);
							   printf("\n\nCoup annules\n\n");	//Si le joueur annule, on enleve 2 pions, et c'est toujours au tour du joueur.
							   break;
			default : printf("Recommencez.");
						break;
					}
		
		}
		afficher_partie(p);
	}
	
	afficher_partie(p);
	if ((IA == 1) && (qui_a_gagne)) 
		printf("\n Tu as perdu.\n");
	else 
		{printf("\nBravo joueur %d : tu as gagné!\n", qui_a_gagne);}
}
		
			
