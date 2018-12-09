#include <stdio.h>
#include "../include/calcul.h"

void Creation_Coordo_Initial(Coordonnees *coordo)
{
	coordo = malloc(sizeof(struct Coordonnees_s));
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

void Position_Suivante(float X, float Y, float Z, float sigma, float rho, float beta, float dt)
{
    float x_suivant = X + (sigma * (Y-X) ) * dt;
    float y_suivant = Y + (X * (rho - Z) - Y) * dt;
    float z_suivant = Z + (X * Y - beta * Z) * dt;
    
    X = x_suivant;
    Y = y_suivant;
    Z = z_suivant;
}
