#include "aire.h"
#include <cmath>
double aireRectangle(double Longueur , double hauteur ){
    return Longueur * hauteur ;
}
double aireDisque(double rayon){
    return std::acos(-1.0)*rayon*rayon ;
}
double aireTriangle(double longueur , double hauteur){
    return longueur * hauteur /2.0 ;
}
