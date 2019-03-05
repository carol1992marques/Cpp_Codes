//Caroline Santos
//Class for initial value problems(IVP)
//Classe para problemas de valor inicial(PVI)


#include<iostream>
#include <cmath>
using namespace std;

typedef double (*pfn)(double,double);

class PVI{
   
private:
    double t_lower;
    double t_upper;
    double delta_t;
    double initialCondition;
    pfn deriv;
    int num_points;

public:

    PVI(double a, double b, double c, double d, pfn df);
    
    double* explictEuler();


double* grid();


};
