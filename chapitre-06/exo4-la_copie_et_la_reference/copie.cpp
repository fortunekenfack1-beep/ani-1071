#include <iostream>
#include <cmath>

struct Vec2
{
    double x ;
    double y ;
};
void bougerCopie(Vec2 p) {
    p.x = p.x + 1 ;
}
void bougerRef(Vec2& p){
    p.x = p.x + 1 ; 
}
double longueurRef(const Vec2& p ) {
    p.x = 0 ; 
    return sqrt(p.x*p.x + p.y*p.y) ;
}
int main (){
    Vec2 p = {3 , 4};
    std::cout<<"Depart : "<< p.x <<" "<<p.y <<" \n";
    bougerCopie(p);
    std::cout<<"apres bougerCopie : "<<p.x <<" "<<p.y <<"\n";
    bougerRef(p);
     std::cout<<"apres bougerRef : "<<p.x <<" "<<p.y <<"\n";
     double l = longueurRef(p);
     std::cout<<"longueur : "<< l <<"\n";
     std::cout<<"Apres longueurRef : " << p.x <<" "<<p.y<<"\n";
     return 0 ; 
}
