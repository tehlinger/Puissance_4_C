#include <grille.h>


// typedef struct { colonne grille[LARGEUR] ; coup historique } str_partie, *partie;


partie nouvelle_partie(){
	
	int i;
	
	partie p;
	p = (partie) malloc (sizeof (str_partie));
	
	(p->historique)=NULL;
	
	
		
	for (i=0; i<LARGEUR; i++){
		
		(p->grille)[i]=(colonne)malloc(sizeof (str_colonne));
		((p->grille)[i]->h)=0;
		
	}
	
	return p;
}
void effacer_colonne (colonne c){
	free (c);
}

void effacer_partie (partie p){
	
	int i;
	for (i = 0; i<LARGEUR;i++)
		effacer_colonne((p->grille)[i]);
	free(p);
}

void deposer_pion ( bool joueur, colonne c) {
	(c->valeurs)[c->h] = joueur;
	(c->h)++;
}
	
void jouer_pion (int indice, bool joueur, partie p){
	
	coup dernier_coup; 								//Ajout du coup joue dans l'historique le la partie
	dernier_coup = (coup) malloc (sizeof(str_coup));
	(dernier_coup -> c) = indice;
	(dernier_coup -> precedent) = (p -> historique);
	p->historique = dernier_coup;
	
	deposer_pion (joueur, ((p->grille)[indice - 1]));//On depose le pion a la colonne (indice-1) grace a la fonction deposer_pion
}
		
	
