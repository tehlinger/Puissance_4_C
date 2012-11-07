#IFNDEF 
#define __I_A_H
#include <grille.h>
#include <verifications.h>

/**Renvoie l'élement maximum d'un tableau d'entier, dont la longueur est rentrée en paramètre**/
int max(int tab[], int longueur);

/**Renvoie le score d'une colonne dont l'indice (entre 1 et 7) est passé en paramètre pour la partie passée en paramètre**/
int score(int indice, partie p, bool joueur);
/*Renvoie, pour l'indice de la colonne i et la longueur l de l'enchaînement de pions du joueur j, le nombre de segments
 * de longueur l pour la colonne i*/
 int nb_alignements( int longueur, bool joueur);
/**Renvoie le tableau des scores de la partie rentrée en paramètre, lorsque le joueur rentré en paramètre**/
int* tab_scores(partie p);
#endif
