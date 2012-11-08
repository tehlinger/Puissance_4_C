#ifndef __I_A_H 
#define __I_A_H
#include <grille.h>
#include <verifications.h>

/**Renvoie l'élement maximum d'un tableau d'entier, dont la longueur est rentrée en paramètre**/
int max(float tab[], int longueur);
/**Renvoie le nombre d'occurences d'un nombre dans un tableau de flottants passé en paramètre**/
int nb_egalites(float tab[], int longueur, float maximum);
/**Renvoie le score d'une colonne dont l'indice (entre 1 et 7) est passé en paramètre pour la partie passée en paramètre**/
float score(int indice, partie p, bool joueur);
/*Renvoie, pour l'indice de la colonne i et la longueur l de l'enchaînement de pions du joueur j, le nombre de segments
 * de longueur l pour la colonne i*/
 int nb_alignements( int longueur, bool joueur, int indice, partie p);
/**Renvoie le tableau des scores de la partie rentrée en paramètre, lorsque le joueur rentré en paramètre**/
float* tab_scores(partie p, bool joueur);

/**L'IA, sous la forme du joueur bool joueur, renvoie un entier correspondant à l'indice de la colonne où elle joue**/
int choix_colonne_IA ( partie p, bool joueur);
#endif
