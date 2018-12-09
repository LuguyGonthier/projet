#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define DT_MAX 0.1
#define DT_MIN 0.0001
#define TMAX 1000
#define TMIN 10
#include "../include/initialisation.h"

void Creation_Parametre(Parametre* par){
	
	printf("Entrez les parametres sigma, rho, beta\n");
	
	printf("Sigma : ");
	scanf ("%f",&par->sigma);
	printf("\n");
	printf("Rho : ");
	scanf ("%f",&par->rho);
	printf("\n");
	printf("Beta : ");
	scanf ("%f",&par->beta);
	printf("\n");
	
	printf("Entrez le Tmax et l'incrementation dt\n");
	
	printf("Tmax : ");
	scanf ("%f",&par->Tmax);
	if ((*par).Tmax < TMIN)
	{
        (*par).Tmax = TMIN;
    }
    else
    {
        if ((*par).Tmax > TMAX)
        {
            (*par).Tmax = TMAX;
        }
    }
	printf("\n");
	printf("dt : ");
	scanf ("%f",&par->dt);
		if ((*par).dt < DT_MIN)
	{
        (*par).dt = DT_MIN;
    }
    else
    {
        if ((*par).dt > DT_MAX)
        {
            (*par).dt = DT_MAX;
        }
    }
    printf("\n");
}
