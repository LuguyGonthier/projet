#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define DT_MAX 0.1
#define DT_MIN 0.0001
#define TMAX 1000
#define TMIN 10

struct Parametre_s{
	float sigma;
	float rho;
	float beta;
	float Tmax;
	float dt;
};
typedef struct Parametre_s Parametre;

void Creation_Parametre(Parametre* par);