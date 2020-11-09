#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <math.h>

double dist(double x1, double y1, double x2, double y2){
  return sqrt( pow(x1 - x2, 2) + pow(y1 - y2, 2 ) );
}

double kerulet(double x1, double y1, double x2, double y2, double x3, double y3){
 double a = dist(x1, y1, x2, y2);
 double b = dist(x1, y1, x3, y3);
 double c = dist(x2, y2, x3, y3);

 return a + b + c;
 }

double terulet(double x1, double y1, double x2, double y2, double x3, double y3){
    double s = kerulet(x1, y1, x2, y2, x3, y3) / 2;
    double a = dist(x1, y1, x2, y2);
    double b = dist(x1, y1, x3, y3);
    double c = dist(x2, y2, x3, y3);
    return sqrt (s * (s - a) * (s - b) * (s - c));
}

int main(){

double x1 = 0, y1 = 0, x2 = 3, y2 = 0, x3 = 0, y3 = 4;

printf(" Haromszog kerulete: %lf\n", kerulet(x1, y1, x2, y2, x3, y3) );
printf(" Haromszog terulete: %lf\n", terulet(x1, y1, x2, y2, x3, y3) );
    
    return 0;
}