#include <iostream>
void echangerParValeur(int a , int b );
void echangerParReference(int& a , int& b );

void echangerParValeur(int a , int b ){
    int c ;
    c=a ;
    a=b;
    b=c ;
}
void echangerParReference(int& a , int& b ){
     int c ;
    c=a ;
    a=b;
    b=c ;
}
int main(){
    int x ;
    int y ;
std::cin>> x >> y ;
echangerParValeur(x , y);
std::cout<< x << "\n";
std::cout<<y <<"\n" ;
echangerParReference(x , y) ;
std::cout<< x << "\n";
std::cout<<y <<"\n" ;

return 0 ;
}