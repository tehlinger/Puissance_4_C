CFLAGS = -Wall -g
IFLAGS = -Iinclude
OPATH = obj/
CPATH = src/

vpath %.h include/
vpath %.c src/
vpath %.o obj/
vpath main bin/


main : main.o grille.o i_o.o verifications.o aleatoire.o i_a.o jeu.o
	gcc $(CFLAGS) -o main  $(OPATH)grille.o $(OPATH)main.o $(OPATH)i_o.o $(OPATH)verifications.o $(OPATH)aleatoire.o $(OPATH)i_a.o $(OPATH)jeu.o
	mv $@ bin/

jeu.o : jeu.c jeu.h grille.h i_a.h i_o.h verifications.h
i_a.o : i_a.c i_a.h verifications.h
aleatoire.o : aleatoire.c aleatoire.h
verifications.o : verifications.c verifications.h	
grille.o : grille.c grille.h
i_o.o : i_o.c i_o.h
main.o : main.c grille.h i_o.h verifications.h

%.o : 
	gcc $(CFLAGS) -c $< $(IFLAGS)
	mv $@ $(OPATH)
        
clean : 
	rm $(OPATH)* bin/*

