#include "PVI.C"
#include <fstream>

double dydt(double t, double y){
   
 return t + 1;
   
 }


int main(){

    cout << "Class ok" << endl;

        
    PVI f(0,6,0.5,0,dydt);
    int num_points = 6/0.5;
    double* y = new double[num_points];
    double* t = new double[num_points];

    y = f.explictEuler();
    t = f.grid();
    ofstream is;
    is.open("points.dat",ios::out);
    
    for(int i = 0; i<num_points; i++){

    is << t[i] << "      " << y[i] << endl;      
            }

delete [] y;
delete [] t;
return 0;
}
