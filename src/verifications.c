#include <verifications.h>

int contenu_case(int x, int y, partie p){
	 if((((p->grille) [x-1]) -> h) < y) return -1;//Si la hauteur de la pile n'atteind pas encore la case, renvoie -1
	 else
	 {
		 if ((((p->grille)[x-1])->valeurs[y-1]) == 0) return 0;
		 else return 1;
	 }
	 }

int dernier_coup (partie p){
	return ((p->historique) -> c);
}

int nb_etapes(partie p){
	int i,acc=0;
	
	for(i=1;i<=LARGEUR;i++)
		acc += (((p->grille)[i-1])->h);
	return acc;
}

int alignes_verticalement (bool joueur, int indice, partie p){
	
	int i, acc = 1;
	
	for ((i=(p->grille[indice - 1])->h); (i > 0) && ((contenu_case(indice, i, p)) == joueur); i--)//On initialise i à la hauteur de la pile/colonne observee
		acc++;
	
	return acc;
}

