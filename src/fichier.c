#include <stdio.h>
#include <stdlib.h>
#include "../include/fichier.h"

void Creation_Fichier(char * FICHIER)
{ 
    FILE*f = NULL;
    
    f = fopen(FICHIER,"w+");
    fclose(f);
}

void Ecriture_Fichier(FILE * f, float t, float x, float  y, float z)
{ 
    fprintf(f, "%f %f %f %f\n", t, x, y, z);
}