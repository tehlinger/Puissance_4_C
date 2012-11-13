#include <i_a.h>

int nb_egalites(float tab[], int longueur, float maximum){
	int i;
	int acc = 0;
	for (i=0; i<longueur; i++)
		if (tab[i] == maximum)
			acc ++;
	return acc;
}

int max(float tab[], int longueur){
	int acc, i;
	acc = 0;
	for (i = 1; i <= longueur; i++){
		if (tab[i] > tab[acc])
		acc = i;
	}
	return acc;
}

int nb_alignements( int longueur, bool joueur, int indice, partie p){
	int acc = 0;
	if (coup_gagnant(indice, joueur, p)) return 1;
	if (alignes_diag_droite(joueur, indice, p) == longueur) acc++; 
	else if	(alignes_diag_gauche(joueur, indice, p) == longueur) acc++;
	else if	(alignes_horizontalement(joueur, indice, p) == longueur) acc++;
	else if	(alignes_horizontalement(joueur, indice, p) == longueur) acc++;
	return acc;
	}

float score(int indice, partie p, bool joueur){
	
	float acc = 0;
	bool joueur_adversaire = (joueur + 1) % 2;
	
		if (nb_alignements( 4, joueur,indice,p))
		return 1.0;//Cas LE PLUS simple : coup gagnant :  on renvoie 1.
			else{
				
				if (coup_gagnant(indice, joueur_adversaire, p)) return 0.99; //Deuxième cas simple : empêcher l'autre de gagner
				
				//Cas cumulables :
				
				else{
					acc += nb_alignements(2, joueur, indice, p);
					acc += (nb_alignements(2, joueur_adversaire, indice, p)*0.5);//On cumule les paires possibles et celles que l'on detruit chez l'autre
					if (nb_alignements(3, joueur_adversaire, indice, p) == 1)
					acc += 8;
						else if (nb_alignements(3, joueur_adversaire, indice, p) > 1) 
							acc += (nb_alignements(3, joueur_adversaire, indice, p))*16;
					if (nb_alignements(3, joueur, indice, p) == 1)
					acc += 15;
					else if (nb_alignements(3, joueur, indice, p) > 1)
						acc += (nb_alignements(3, joueur, indice, p))*33;
					}
				}
		return (acc / 190.0);
	}
					
void tab_scores(partie p, bool joueur, float tab[LARGEUR]){
	
	int i;
	
	for(i=1; i<=LARGEUR; i++)
		tab[i] = score(i, p,joueur);
	}

int choix_colonne_IA ( partie p, bool joueur){
	
	float tab [LARGEUR];
	tab_scores(p, joueur, tab);
	return (max(tab, LARGEUR));
}
	
