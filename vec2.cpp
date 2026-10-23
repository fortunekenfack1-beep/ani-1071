#include<iostream>
#include<cmath>
#include<iomanip>

    struct Vec2 
    {
        double x ;
        double y ;
    };
const double pi=3.14159265358979 ;
Vec2 add(Vec2 a , Vec2 b){
    return {a.x + b.x , a.y + b.y};
}
Vec2 sub(Vec2 a , Vec2 b){
    return {a.x - b.x , a.y - b.y};
}
Vec2 scale(Vec2 a , double k){
    return {a.x *k  , a.y *k};
}
double dot(Vec2 a , Vec2 b){
    return a.x * b.x + a.y * b.y;
}
double length(Vec2 a){
    return sqrt (dot(a , a)) ;
}
Vec2 normalize(Vec2 a ){
    double l=length(a) ;
    if(l==0) { 
        return {0 , 0} ;
         }
     return scale(a , 1/l) ;
}
Vec2 lerp(Vec2 a , Vec2 b , double t){
    return add(scale( sub(b , a) , t) , a);
    
}
Vec2 perp(Vec2 a ){
    return {-a.y , a.x} ;
}
Vec2 rotation(Vec2 a , double angle){
    return {a.x *cos(angle) -a.y *sin(angle) , 
            a.x * sin(angle) + a.y * cos(angle)} ;
}
Vec2 reflect(Vec2 v , Vec2 n){
   double d=  dot(v , n);
   return sub(v , scale(n , 2*d));
    
}
double radians(double degrees){
    return degrees * pi / 180 ;
}
void afficher(Vec2 v ){
    std::cout<<"{ "<< v.x <<", "<< v.y <<" }" ;
}
int main(){
    std::cout<<std::setprecision(17) ;
    std::cout<<"---- Les quatres ----\n" ;
    std::cout<<"length({3 , 4}) = "<<length({3 , 4}) <<"\n";
    std::cout<<"dot({1 , 0 } , {0 , 1}) = "<<dot({1 , 0} ,{0 , 1}) <<"\n";
    std::cout<<"rotation({1 , 0 } , radians(90))= ";
    afficher(rotation({1 , 0 } , radians(90)));
    std::cout<<"\n ";
    std::cout<<"reflect({1 ,-1 }, {0 , 1}) = ";
    afficher(reflect({1 ,-1 }, {0 , 1}));
    std::cout<<"\n ";

        std::cout<<"---- Mes essais ----\n" ;

        std::cout<<"add({1, 2} , {3 , 4}) = ";
        afficher(add({1, 2} , {3 , 4}));
        std::cout<<"\n ";
         std::cout<<"sub({1, 2} , {3 , 4}) = ";
        afficher(sub({1, 2} , {3 , 4}));
        std::cout<<"\n ";
         std::cout<<"scale({1, 2} , 3 ) = ";
        afficher(scale({1, 2} , 3 ));
        std::cout<<"\n ";
         std::cout<<"normalize( {3 , 4}) = ";
        afficher(normalize( {3 , 4}));
        std::cout<<"\n ";
         std::cout<<"lerp({0, 0} , {10 , 20} , 0.5) = ";
        afficher(lerp({0, 0} , {10, 20} , 0.5));
        std::cout<<"\n ";
         std::cout<<"perp({1, 2} ) = ";
        afficher(perp({1, 2} ));
        std::cout<<"\n ";

        std::cout<<"---- Epsilon ----\n" ;
        double epsilon = 1e-9 ;
        Vec2 r = rotation({1 , 0} , radians(90)) ;
        std::cout<<"x = "<<r.x <<"\n" ;
        std::cout<<"y = "<<r.y <<"\n" ;
        std::cout<<"epsilon = "<<epsilon <<"\n" ;
              if((std::fabs(r.x - 0)) < epsilon && (std::fabs(r.y - 1)) < epsilon) {
                std::cout<< "rotation{1 , 0 } , radians(90) = {0 , 1} a epsilon pres : juste\n";
              }
              else{
                std::cout<< "rotation{1 , 0 } , radians(90) differe de {0 , 1} : faux\n" ;
              }


return 0;

}