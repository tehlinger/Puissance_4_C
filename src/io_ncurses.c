#include <io_ncurses.h>

void lancer_buffer(){
	initscr();}
	
void afficher_trait(){
	int i;
	addch("|");
	for(i = 0; i < LARGEUR; i++)
	addstr("---|");
	addch("\n");
}
	
	
void afficher_partie(partie p){
	for (i = 0; i < LARGEUR; i++)
	
}
