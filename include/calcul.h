#include <stdio.h>

struct Coordonnees_s
{
    float x;
    float y;
    float z;
};
typedef struct Coordonnees_s Coordonnees;

void Creation_Coordo_Initial(Coordonnees* coordo);

void Position_Suivante(float *X, float *Y, float *Z, float dt);