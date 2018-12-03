#ifndef TRAJECTOIRE_H
#define TRAJECTOIRE_H


#define EQU_SIZE_LIMIT 100
#define MAX_SYSTEMS 10
#define PARAM_SIZE_LIMIT 30
#define SYS_NAME_SIZE_LIMIT 50
#define DATA "data/"
#define SYSDYN ".sysdyn"

struct point
{
	double x;
	double y;
	double z;
};
typedef struct point *Point;




struct sys_equation
{
	char* dx;
	char* dy;
	char* dz;
};
typedef struct sys_equation *Sys_equation;



struct parametres
{
	Point point_init;
	double dt;
	int Tmax;
};

typedef struct parametres *Parametres;

struct trajectoire
{
	Parametres parametres;
	Sys_equation equations;
	char* nom_sys;
};

typedef struct trajectoire *Trajectoire;

struct fonction
{
	void (*Derive)(Point pt, Point pt0, int choix);
};
