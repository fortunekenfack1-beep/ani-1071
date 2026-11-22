#include <iostream>
#include <vec2.h>
int main () {
    double d = 4 ;
    ani ::  Vec2 a = { 1 , 2} ;
    ani:: Vec2 u = { 3 , 4};
    ani:: Vec2 c = ani:: add (a , u) ;
    ani:: produit( a , u) ;
    ani:: longueur(a);
    std::cout <<"le produit est :"<< ani::produit(a , u)<<"\n";
    std::cout <<"la longueur  est :"<< ani::longueur(a)<<"\n";
    std::cout <<"la somme est : ("<< c.x << " , "<< c.y<<" )" <<"\n";
    return 0 ;
    
}