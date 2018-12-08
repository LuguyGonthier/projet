#include <stdio.h>
#include <stdlib.h>
#include "../include/fichier.h"

void Creation_Fichier(char * fichier)
{ 
    FILE* f = NULL;
    f = fopen(fichier,"w+");
    fclose(f);
}
void Ecriture_Fichier(FILE* fichier, float t, float x, float  y, float z)
{ 
    fprintf(fichier, "%f %f %f %f\n", t, x, y, z);
}