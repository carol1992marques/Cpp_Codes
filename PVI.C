#include "PVI.H"

PVI::PVI(double a, double b, double c,double d, pfn df){

    t_lower = a;
    t_upper = b;
    delta_t = c;
    initialCondition = d;
    deriv = df;
    num_points = (t_upper - t_lower)/delta_t ;

}

double* PVI::explictEuler(){

  double* points = new double[num_points];
  points[0] = initialCondition;
  for(int i=0; i < num_points; i++) {

      points[i+1] = points[0] + delta_t*deriv(t_lower + delta_t*i, points[i]);
}


return points;

}

double* PVI::grid() {
 
  double* time = new double[num_points];
  time[0] = t_lower;

  for(int i=0; i < num_points; i++) {

        time[i+1] = time[i] + delta_t;
    }
    
  return time;

}











