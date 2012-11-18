#ifndef __JEU_H
#define __JEU_H
#include <grille.h>
#include <i_a.h>
#include <i_o.h>
#include <verifications.h>


/**Boucle principale permettant le déroulement de la partie
 * Renvoie 0 si l'IA ou le joueur 2 gagne, 1 sinon.
 **/
void lancer_partie(partie p);

/**Retire les DEUX derniers coups, afin que le joueur puisse rejouer le coup précédent.**/

partie annuler_coups(partie p);
#endif
