#include <grille.h>


// typedef struct { colonne grille[LARGEUR] ; coup historique } str_partie, *partie;


partie nouvelle_partie(){
	
	int i;
	
	partie p;
	p = (partie) malloc (sizeof (str_partie));
	
	(p->historique)=NULL;
	
	
		
	for (i=0; i<HAUTEUR; i++){
		
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
	
	
	
