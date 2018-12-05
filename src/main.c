#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../include/calcul.h"
#include "../include/fichier.h"
#include "../include/gnuplot.h"
#include "../include/initialisation.h"

int main ( int argc , char * argv [ ] )
{
    Parametre parametreBase;
    Coordonnees coordo;
    Creation_Parametre(&parametreBase);
    Creation_Coordo_Initial(&coordo);
    char Fichier="../data/position.dat";
    float T = 0;
    float facteur = (parametreBase.Tmax)/(parametreBase.dt)
    
    Creation_Fichier(Fichier);
  
    FILE* f = NULL;

	fichier = fopen(Fichier,"a"); 
	
    Ecriture_Fichier(fichier,T,coordo.x,coordo;y,coordo.z);

    while (T < parametreBase.Tmax )
    {
        Position_Suivante(coordo.x,coordo;y,coordo.z,parametreBase.dt);
        Ecriture_Fichier(fichier,T,coordo.x,coordo;y,coordo.z);
        T=T+facteur;
    }
    
    Trace_gnuplot(Fichier);
}