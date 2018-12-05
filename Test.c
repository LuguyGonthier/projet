#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define DT_MAX 0.1
#define DT_MIN 0.0001
#define TMAX 1000
#define TMIN 10

struct Coordo_s
{
	float x;
	float y;
	float z;
};
typedef struct Coordo_s Coordo;

struct Parametre_s
{
	float sigma;
	float rho;
	float beta;
	float Tmax;
	float dt;
};
typedef struct Parametre_s Parametre;

void Creation_Parametre(Parametre* par)
{
	
	printf("Entrez les parametres sigma, rho, beta\n");
	
	printf("Sigma : ");
	scanf ("%f",&par->sigma);
	printf("\n");
	printf("Rho : ");
	scanf ("%f",&par->rho);
	printf("\n");
	printf("Beta : ");
	scanf ("%f",&par->beta);
	printf("\n");
	
	printf("Entrez le Tmax et l'incrementation dt\n");
	
	printf("Tmax : ");
	scanf ("%f",&par->Tmax);
	if ((*par).Tmax < TMIN)
	{
        (*par).Tmax = TMIN;
    }
    else
    {
        if ((*par).Tmax > TMAX)
        {
            (*par).Tmax = TMAX;
        }
    }
	printf("\n");
	printf("dt : ");
	scanf ("%f",&par->dt);
		if ((*par).dt < DT_MIN)
	{
        (*par).dt = DT_MIN;
    }
    else
    {
        if ((*par).dt > DT_MAX)
        {
            (*par).dt = DT_MAX;
        }
    }
    printf("\n");
}

int main ( int argc , char * argv [ ] )
{
    Parametre parametreBase;
    Creation_Parametre(&parametreBase);
    
    printf ("%f,   %f,   %f,   %f,   %f",parametreBase.sigma, parametreBase.rho, parametreBase.beta, parametreBase.dt, parametreBase.Tmax);
    
}