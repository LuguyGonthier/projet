#include <stdio.h>
#include "../include/calcul.h"

void Creation_Coordo_Initial(Coordonnees* coordo)
{
	printf("Entrez les positions initiales\n");
	
	printf("X0 : ");
	scanf ("%f",&coordo->x);
	printf("\n");
	printf("Y0 : ");
	scanf ("%f",&coordo->y);
	printf("\n");
	printf("Z0 : ");
	scanf ("%f",&coordo->z);
	printf("\n");
}

void Position_Suivante(float *X, float *Y, float *Z, float dt)
{
    float x_suivant = (*X) + (10 * ((*Y)-(*X)) ) * dt;
    float y_suivant = (*Y) + ((*X) * (28 - (*Z)) - (*Y)) * dt;
    float z_suivant = (*Z) + ((*X) * (*Y) - (8/3) * (*Z)) * dt;
    
    (*X) = x_suivant;
    (*Y) = y_suivant;
    (*Z) = z_suivant;
}
