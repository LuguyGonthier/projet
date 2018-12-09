EXEC=./bin/lorenz.exe
GCC=gcc
CFLAGS=-Wall -g
SRC= ./src/main.c ./src/initialisation.c ./src/gnuplot.c ./src/fichier.c ./src/calcul.c
OBJ=$(SRC:.c=.o)
INCLUDE=./include
LIBFLAGS=-lm


all:$(EXEC)

$(EXEC): $(OBJ) $(INCLUDE)/*.h
	$(GCC) $(CFLAGS) -o $(EXEC) $(OBJ) -I$(INCLUDE) -L$(LIB) $(LIBFLAGS)
	mv src/*.o lib

lib/libmain.a : lib/calcul.o lib/fichier.o lib/gnuplot.o lib/initialisation.o
	ar rcs lib/libmain.a lib/calcul.o lib/fichier.o lib/gnuplot.o lib/initialisation.o

lib/calcul.o : src/calcul.c include/calcul.h
	gcc -c src/calcul.c -o lib/calcul.o

lib/fichier.o : src/fichier.c include/fichier.h
	gcc -c src/fichier.c -o lib/fichier.o

lib/gnuplot.o : src/gnuplot.c include/gnuplot.h
	gcc -c src/gnuplot.c -o lib/gnuplot.o

lib/initialisation.o :  src/initialisation.c include/initialisation.h
	gcc -c src/initialisation.c -o lib/initialisation.o
	
clean:
	rm $(EXEC)
	rm lib/*.o