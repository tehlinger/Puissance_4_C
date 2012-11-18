#include <grille.h>
#include <verifications.h>


// typedef struct { colonne grille[LARGEUR] ; coup historique } str_partie, *partie;
	 
partie nouvelle_partie(){
	
	int i,j;
	
	partie p;
	p = (partie) malloc (sizeof (str_partie));
	
	(p->historique)=NULL;
	
	
		
	for (i=0; i<LARGEUR; i++){
		
		(p->grille)[i]=(colonne)malloc(sizeof (str_colonne));
		((p->grille)[i]->h)=0;
	}
	for(i=0;i<LARGEUR;i++){
		for(j=0;j<HAUTEUR;j++)
			((p->grille[i])->valeurs[j])=-1;
		}
	
	return p;
}
void effacer_colonne (colonne c){
	free (c);
}


void liberer_historique (coup historique){
	
	if (historique != NULL){
	
	coup tmp = (coup)malloc(sizeof(str_coup));
	
	while (historique != NULL){
		tmp = historique;
		historique = (historique -> precedent);
		free(tmp);
	}
}	
}	
	
void liberer_partie (partie p){
	
	int i;
	for (i = 0; i<LARGEUR;i++)
		effacer_colonne((p->grille)[i]);
	liberer_historique(p -> historique);
	free(p);
}

void deposer_pion ( bool joueur, colonne c) {
	(c->valeurs)[c->h] = joueur;
	(c->h)++;
}
	
void retirer_pion(partie p){
	
	coup coup_dernier = (p->historique);
	colonne a_modifier = ((p->grille)[coup_dernier->c-1]); 

	(a_modifier -> valeurs)[(a_modifier->h) - 1] = -1;  
	(a_modifier -> h)--;                           
	
	(p->historique) = (coup_dernier -> precedent);
	free(coup_dernier);
		
}

void jouer_pion (int indice, bool joueur, partie p){
	//Ajout du coup joue dans l'historique le la partie
	coup dernier_coup = (coup) malloc (sizeof(str_coup));
	(dernier_coup -> c) = indice;
	(dernier_coup -> precedent) = (p -> historique);
	p->historique = dernier_coup;
	
	deposer_pion (joueur, ((p->grille)[indice - 1]));//On depose le pion a la colonne (indice-1) grace a la fonction deposer_pion
}
		

