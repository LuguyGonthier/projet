#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int scanInt(char* ch){
	int t = 0;
	
	while (1)
	{
		printf("\n%s=",ch);
		if (!scanf(" %d", &(t)))
		{
			printf("scan%s: erreur de syntaxe, '%s' est du type 'int'\n",ch,ch);
			clear();
		}
		else
			break;
	}
	return t;
}

double scandv(char* ch){
	double dv=0;
	while (1)
	{
		printf("\n%s=",ch);
		if (!scanf("%lf", &(dv)))
		{
			printf("scan%s: erreur de syntaxe, '%s' est du type 'double'\n",ch,ch);
			clear();
		}
		else
			break;
	}
	return dv;
}

Point scanPoint(){
	printf("\nEntrez les coordonnees du point initiale de trajectoire (x0, y0, z0)\n");

	Point pt=initPoint(scandv("x0"),scandv("y0"), scandv("z0"));

	return pt;
}

Parametres scanParam(){
	printf("\nEntrez la valeur de l'increment de temps dt puis celle du temps maximale Tmax\n");

	
	Parametres param=initParametres(scandv("dt"),scanInt("Tmax"),scanPoint());

	return param;
}
