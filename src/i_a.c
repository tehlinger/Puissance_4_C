#include i_a.h

int max(float tab[], int longueur){
	int acc, i;
	acc = tab[0];
	for (i = 1; i < longueur; i++){
		if (tab[i] > acc)
		acc = tab[i];
	}
	return acc;
}
int nb_alignements( int longueur, bool joueur){
	int acc = 0;
	if (alignes_diag_droite(joueur, i, p) == longueur) acc++;
	else if	(alignes_diag_gauche(joueur, i, p) == longueur) acc++;
	else if	(alignes_horizontalement(joueur, i, p) == longueur) acc++;
	else if	(alignes_horizontalement(joueur, i, p) == longueur) acc++;
	return acc;
	}
		
float score(int indice, partie p, bool joueur){
	bool joueur_adversaire = (joueur + 1) % 2;
	if ((alignes_diag_droite(joueur, i, p) == 4) ||
		(alignes_diag_gauche(joueur, i, p) == 4) ||
		(alignes_horizontalement(joueur, i, p) == 4) ||
		(alignes_horizontalement(joueur, i, p) == 4))
		return 1.0;
	else if ((alignes_diag_droite(joueur_adversaire, i, p) == 4) ||
		(alignes_diag_gauche(joueur_adversaire, i, p) == 4) ||
		(alignes_horizontalement(joueur_adversaire, i, p) == 4) ||
		(alignes_horizontalement(joueur_adversaire, i, p) == 4))
		return 0.9;
	
	
	
