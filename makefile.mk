all : exec

bin/lorenz.exe : src/main.c lib/libmain.a 
	gcc -o bin/lorenz.exe src/main.c -L lib -lmain
	
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

exec : bin/lorenz.exe
	./bin/lorenz.exe 