#include <stdio.h>
#include <stdlib.h>
#include <grille.h>
int main ()
{
	partie p;
	p=nouvelle_partie();
	jouer_pion(1, 1, p);
	free(p);

	return 1;
}
