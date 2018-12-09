#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../include/calcul.h"
#include "../include/fichier.h"
#include "../include/gnuplot.h"
#include "../include/initialisation.h"

int main ( int argc , char * argv [ ] ){
    Parametre parametreBase;
    Coordonnees coordo;
    Creation_Parametre(&parametreBase);
    Creation_Coordo_Initial(&coordo);
    
    char Fichier[69]="../data/position.dat";
    float T = 0;
    Creation_Fichier(Fichier);
    
    FILE* f = NULL;
    f = fopen(Fichier,"a");
    
    while (T < parametreBase.Tmax )
    {
        Position_Suivante(&coordo.x,&coordo.y,&coordo.z,parametreBase.dt);

        Ecriture_Fichier(f,T,coordo.x,coordo.y,coordo.z);
        T=T+parametreBase.dt;
    }
    
    Trace_gnuplot(Fichier);
    
    return 0;
}