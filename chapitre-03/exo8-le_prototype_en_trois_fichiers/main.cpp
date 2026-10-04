#include <iostream>
#include <iomanip>
#include "aire.h"
int main(){
    double longueur , hauteur , rayon ;
    std::cin >>longueur >> hauteur  >> rayon ;
    std::cout<< std::fixed <<std::setprecision(4);
    std::cout<<aireRectangle( longueur ,  hauteur )<<"\n";
    std::cout<<aireDisque( rayon ) <<"\n";
    std::cout<<aireTriangle( longueur ,  hauteur)<<"\n";
    return 0 ;
}
