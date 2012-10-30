#IFNDEF
#DEFINE __JEU_H
#include stdlib.h
/**
 * Fonction : Jouer un pion du joueur bool à la colonne ou_jouer de la grille de la partie 
 * Renvoie : Rien, fonction procédurale
 **/
void deposer_pion (bool joueur, int ou_jouer, partie p);

/**
 * Enleve les deux derniers pions joués équivalent à un tour de jeu
 * Paramètre :  La partie
 * Renvoie : Rien, fonction  procédurale
 **/
void retirer_pion (partie p);

/**
 * Fonction : teste si le dernier coup joué est un coup gagnant
 * Paramètre : Une partie p
 * Renvoie : Vrai si le dernier joueur à avoir joué a gagné, faux sinon
 **/
 
 bool a_gagne (partie p);
 
 /**
 
#ENDIF
