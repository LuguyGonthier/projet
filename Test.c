#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct Parametre Parametre;
struct Parametre
{
	float sigma;
	float rho;
	float beta;
	float Tmax;
	float dt;
};

void Creation_Parametre(Parametre* par)
{
	
	printf("Entrez les parametres sigma, rho, beta\n");
	
	printf("Sigma : ");
	scanf ("%f",&(par.sigma));
	printf("\n");
	printf("Rho : ");
	scanf ("%f",&(par.rho));
	printf("\n");
	printf("Beta : ");
	scanf ("%f",&(par.beta));
	printf("\n");
	
	printf("Entrez le Tmax et l'incrementation dt");
	
	printf("Tmax : ");
	scanf ("%f",&(par.Tmax));
	printf("\n");
	printf("dt : ");
	scanf ("%f",&(par.dt));
}

int main ( int argc , char * argv [ ] )
{
    Parametre par ;
    Creation_Parametre(&par);
    
    printf("%f,%f,%f,%f,%f",par.sigma, par.rho, par.beta, par.Tmax, par.dt);
}