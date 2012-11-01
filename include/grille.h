#ifndef __GRILLE_H
#define __GRILLE_H
#include <stdlib.h>

# define HAUTEUR 6
# define LARGEUR 7

// Mise en place des types



typedef struct str_coup {  int c ; struct str_coup *precedent ;} str_coup, *coup;

typedef int bool;

typedef struct { bool valeurs[HAUTEUR] ; int h;} str_colonne,*colonne;

typedef struct { colonne grille[LARGEUR] ; coup historique;} str_partie, *partie;

//Fonctions de gestion des grilles

/**
 * Fonction : renvoie une nouvelle partie, vide
 * Paramètre : Aucun
 * Précondition : Aucune
 **/

partie nouvelle_partie();

/**
 * \function : effacer_partie
 * \brief : libere l'espace memoire ocuupe par la partie à effacer
 * \param p La partie à effacer
 * \return Rien
 **/
 
 void effacer_partie(partie p);

/**
 * \function : effacer_colonne
 * \brief : libere l'espace memoire occupe par la colonne à effacer
 * \param c la colonne à effacer
 * \return Rien
 **/

void effacer_colonne(colonne c);

/**
 * \brief depose le pion de valeur joueur dans la colonne c
 * \param joueur la valeur du pion (vrai ou faux)
 * \param c la colonne modifiee
 * \return rien, procedural
 **/

void deposer_pion(bool joueur, colonne c);

/**
 * \brief Depose le pion du joueur dans la colonne
 * \param indice l'indice de la colonne
 * \param joueur : le joueur qui joue (vrai -> l'utilisateur, faux -> le bot)
 * \param p la partie a modifier
 * \return Rien, fonction procedurale
 * \precondition : 0< indice <= 7
 **/

void jouer_pion (int indice, bool joueur, partie p);


/**
 * \brief Renvoie le contenu de la case dans la colonne x à la hauteur y ou -1 si la case est vide
 * \param x : la colonne
 * \param y : la hauteur de la colonne
 * \param p : la partie en question
 **/
 
 int contenu_case (int x, int y, partie p);
	  
#endif

