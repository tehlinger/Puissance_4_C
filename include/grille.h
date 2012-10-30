#ifndef __GRILLE_H
#define __GRILLE_H
#include <stdlib.h>

# define HAUTEUR 6
# define LARGEUR 7

// Mise en place des types



typedef struct str_coup {  int c ; struct str_coup *suivant ;} str_coup, *coup;

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
 * \function : effacer_partie
 * \brief : libere l'espace memoire occupe par la partie à effacer
 * \param p la partie à effacer
 * \return Rien
 **/

void effacer_colonne(colonne c);

/**
 * \function : effacer_colonne
 * \brief : libere l'espace memoire occupe par la colonne à effacer
 * \param c la colonne à effacer
 * \return Rien
 **/

#endif

