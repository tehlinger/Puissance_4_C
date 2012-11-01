CFLAGS = -Wall -g
IFLAGS = -Iinclude
OPATH = obj/
CPATH = src/

vpath %.h include/
vpath %.c src/
vpath %.o obj/
vpath main bin/


main : main.o grille.o i_o.o verifications.o
	gcc $(CFLAGS) -o main  $(OPATH)grille.o $(OPATH)main.o $(OPATH)i_o.o $(OPATH)verifications.o
	mv $@ bin/

verifications.o : verifications.c verifications.h	
grille.o : grille.c grille.h
i_o.o : i_o.c i_o.h
main.o : main.c grille.h i_o.h verifications.h

%.o : 
	gcc $(CFLAGS) -c $< $(IFLAGS)
	mv $@ $(OPATH)
        
clean : 
	rm $(OPATH)* bin/*

