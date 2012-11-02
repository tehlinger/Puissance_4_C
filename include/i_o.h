#ifndef __IO_H
#define __IO_H
#include <stdio.h>
#include <grille.h>


/**
 * \brief : Affiche l'etat actuel d'une partie
 * \param : p la partie a afficher
 * \return : rien
 **/
void afficher_partie (partie p);

/**
 * \brief Trace les traits delimitant les lignes
 * \param La largeur de la grille
 **/
 void tracer_ligne( int largeur );
 
 /**\brief : Remplit toutes les cases d'une ligne
  * \param : p la partie en question
  * \param : hauteur, la hauteur de la ligne en question
  **/
  void remplir_ligne(int hauteur, partie p);
  
  /**
   * \brief : efface la grille
   **/
   
   void effacer_grille();
   
   /** Fonction demandant à l'utilisateur le coup qu'il veut jouer, renvoie 1 s'il gagne, 0 sinon.
    *  Préconditions : la partie existe
    **/
   bool demander_coup_joueur(partie p, bool joueur);
   
   
    #endif
 
 
