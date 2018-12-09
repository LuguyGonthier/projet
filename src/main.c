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
    printf("0");
    Creation_Coordo_Initial(&coordo);
    
    //char Fichier[69]="../data/position.dat";
    float T = 0;
    float facteur = ((parametreBase.Tmax)/(parametreBase.dt));
    printf("1");
    
    Creation_Fichier("../data/position.dat");
    printf("2");
    FILE* f = NULL;
    f = fopen("../data/position.dat","a");
    printf("3");
    Ecriture_Fichier(f,T,coordo.x,coordo.y,coordo.z);
    while (T < parametreBase.Tmax )
    {
        Position_Suivante(coordo.x,coordo.y,coordo.z,parametreBase.sigma, parametreBase.rho, parametreBase.beta, parametreBase.dt);

        Ecriture_Fichier(f,T,coordo.x,coordo.y,coordo.z);
        T=T+facteur;
    }
    printf("4");
    Trace_gnuplot("../data/position.dat");
}