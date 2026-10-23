#include <iostream>
#include <cmath>


struct Vec2
{
    double x ;
    double y ;
};

void eulerSemiImplicite( Vec2& p , Vec2& v , Vec2 a , double dt){
    v.x += a.x*dt ;
    v.y+= a.y*dt  ;
    p.x += v.x*dt;
    p.y += v.y*dt ;
 };

    
double hauteurMax(double v0 , double dt){
   Vec2 p = {0 , 0} ;
   Vec2 v = {0 , v0} ;
   Vec2 a = { 0 , -9.81} ; 
   double hMax = 0 ;
   do{ 
   eulerSemiImplicite(  p ,  v ,  a , dt) ;
   if (p.y > hMax){
    hMax = p.y ;
   } }while(p.y>0); 
   return hMax ;


}
int main (){
const double g = 9.81 ;
const double h = 3 ;
double v0 = sqrt(2 * g * h) ;
double dt1 = 1.0 / 120 ;
double dt2 = 1.0 / 30 ;
double dt3 = 1.0 / 1000 ;
std::cout<<" V0 : "<< v0 <<"\n" ;
std::cout<<"1 / 120 : "<< hauteurMax(v0 , dt1)<<"\n";
std::cout<<"1 / 30 : "<< hauteurMax(v0 , dt2)<<"\n";
std::cout<<"MON PAS 1 / 1000 : "<< hauteurMax(v0 , dt3)<<"\n";
return 0 ;
}

