#include<iostream>
#include<cmath>
#include<iomanip>

using Fonction = double(*)(double) ;
double carre ( double x);
double carreMoins2( double x) ;
double integrale(Fonction f , double a , double b) ;
double derivee(Fonction f , double x ) ;
double zero ( Fonction f , double a , double b ) ;

double carre ( double x){
    return x*x ;
}
double carreMoins2( double x) {
    return (x*x )-2 ;
}
double integrale(Fonction f , double a , double b) {
   double pas = (b- a)/1000 ;
    double  somme = 0 ;
    for(int i=0 ; i<=999; i++){
        somme += f(a + i * pas ) * pas ;
    }
          return somme ;
}
double derivee(Fonction f , double x ) {
    double h= 1e-6 ;
    return (f(x+h) - f(x-h))/(2 * h) ;
}
double zero ( Fonction f , double a , double b ) {
    for(int i=0 ; i< 100 ; i++){
        double m = (a + b)/2 ;
        if(f(a) * f(m) < 0){
            b= m ;
        } else {
            a= m ;
        }
    }
    return (a + b ) / 2 ;
}


int main(){
    std::cout <<std::setprecision(10) ;
 std::cout<< "integrale sin 0..3.14159 = " 
            << integrale( sin , 0 , 3.14159)<<"\n";
std::cout<< "integrale carre 0..1 = " 
            << integrale( carre , 0 , 1)<<"\n";
 std::cout<< "derivee sin en 0  = " 
            << derivee( sin , 0 )<<"\n";
 double z = zero(carreMoins2 , 1 , 2) ;
 std::cout<< "Zero de x*x-2 entre 1 et 2 = "<< z <<"\n" ;
 std::cout<<"sqrt(2)= "<< std::sqrt(2.0)<<"\n";
 std::cout<<"ecart = "<<std::fabs(z - std::sqrt(2.0))<<"\n" ;
 return 0 ;

}
