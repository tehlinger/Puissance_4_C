#ifndef __VERIFICATIONS_H
#define __VERIFICATIONS_H
#include <stdlib.h>
#include <grille.h>

/**
 * \brief Renvoie le contenu de la case dans la colonne x à la hauteur y ou -1 si la case est vide
 * \param x : la colonne
 * \param y : la hauteur de la colonne
 * \param p : la partie en question
 **/
 
 int contenu_case (int x, int y, partie p);
 

/**Renvoie le total de pions posés dans la grille
 * paramètre : la partie p
 **/
int nb_etapes(partie p);

/**Renvoie l'indice du dernier pion placé
 **/

int dernier_coup (partie p);

/**Renvoie le nombre de pions alignés horizontalement incluant le dernier pion posé sur la colonne
 * Paramètres : L'indice de la colonne, la partie p,  bool le joueur questionné
 * Préconditions : 0 < indice <= LARGEUR
 **/
 
int alignes_horizontalement (bool joueur, int indice, partie p);

/**Renvoie le nombre de pions alignés horizontalement incluant le dernier pion posé sur la colonne
 * Paramètres : L'indice de la colonne, la partie p,  bool le joueur questionné
 * Préconditions : 0 < indice <= LARGEUR
 **/
 
int alignes_verticalement (bool joueur, int indice, partie p);

/**Renvoie le nombre de pions alignés verticalement incluant le dernier pion posé sur la colonne
 * Paramètres : L'indice de la colonne, la partie p,  bool le joueur questionné
 * Préconditions : 0 < indice <= LARGEUR
 **/
 
int alignes_diag_gauche(bool joueur, int indice, partie p);

/**Renvoie le nombre de pions alignés diagonalement NO/SE incluant le dernier pion posé sur la colonne
 * Paramètres : L'indice de la colonne, la partie p,  bool le joueur questionné
 * Préconditions : 0 < indice <= LARGEUR
 **/
 
int alignes_diag_doite (bool joueur, int indice, partie p);
/**Renvoie le nombre de pions alignés diagonalement NE/SO incluant le dernier pion posé sur la colonne
 * Paramètres : L'indice de la colonne, la partie p,  bool le joueur questionné
 * Préconditions : 0 < indice <= LARGEUR
 **/
 


 
#endif
