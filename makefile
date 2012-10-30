CFLAGS = -Wall -g
IFLAGS = -Iinclude
OPATH = obj/
CPATH = src/

vpath %.h include/
vpath %.c src/
vpath %.o obj/
vpath main bin/


main : main.o grille.o
	gcc $(CFLAGS) -o main  $(OPATH)grille.o $(OPATH)main.o
	mv $@ bin/
	
grille.o : grille.c grille.h
main.o : main.c grille.h

%.o : 
	gcc $(CFLAGS) -c $< $(IFLAGS)
	mv $@ $(OPATH)
        
clean : 
	rm $(OPATH)* bin/*

