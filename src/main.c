#include <stdio.h>
#include <stdlib.h>
#include <grille.h>
int main ()
{
	partie p;
	p=nouvelle_partie();
	free(p);

	return 1;
}
