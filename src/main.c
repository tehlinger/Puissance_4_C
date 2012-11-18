#include <stdio.h>
#include <stdlib.h>
#include <grille.h>
#include <i_o.h>
#include <verifications.h>
#include <aleatoire.h>
#include <time.h>
#include <jeu.h>

int main ()
{	
	partie p;
	p = nouvelle_partie();
	lancer_partie(p);
	liberer_partie(p);
	return 1;
}
