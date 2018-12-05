#include <stdio.h>
#include "../include/trajec.h"

struct Coordonnees_s
{
    float x;
    float y;
    float z;
};
typedef struct Coordonnees_s Coordonnees;


void Position_Suivante(float *X, float *Y, float *Z, float dt)
{
    float x_suivant = (*X) + (10 * ((*Y)-(*X)) ) * dt;
    float y_suivant = (*Y) + ((*X) * (28 - (*Z)) - (*Y)) * dt;
    float z_suivant = (*Z) + ((*X) * (*Y) - (8/3) * (*Z)) * dt;
    
    (*X) = x_suivant;
    (*Y) = y_suivant;
    (*Z) = z_suivant;
}
