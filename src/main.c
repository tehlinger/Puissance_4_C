#include <stdio.h>
#include <stdlib.h>
#include <grille.h>
#include <i_o.h>
#include <verifications.h>
int main ()
{
	partie p;
	p=nouvelle_partie();
	jouer_pion(1, 1, p);
	jouer_pion(1, 1, p);
	jouer_pion(1, 1, p);
	jouer_pion(1, 0, p);
	afficher_partie(p);
	retirer_pion(p);
	afficher_partie(p);
	free(p);

	return 1;
}
