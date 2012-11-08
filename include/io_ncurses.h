#ifndef
#define __IO_NCURSES_H
#include <ncurses.h>
#include <grille.h>

/**Initialise le buffer permettant l'affichage de la grille **/
void lancer_buffer();

/**Affiche la partie rentrée en paramètre**/
void afficher_partie(partie p);

/**Affiche les traits séparant les cases**/
void afficher_trait();

/**Demande la colonne où placer un pion a l'utilisateur**/
int demander_coup();
