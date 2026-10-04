#include <iostream>
 
void f(long n) ;
#ifndef AVEC_TABLEAU
#define AVEC_TABLEAU 0
#endif

void f(long n){
    #if AVEC_TABLEAU
    volatile int gros[1000] ;
    gros[n % 1000]=
    (int n) ;
    std::cout<< n <<" " <<gros[(n+1) % 1000] <<"\n" ;
    #else 
    std::cout<< n <<"\n" ;
    #endif
    f(n+1);
}
int main (){
    f(1) ;
    return 0 ;
}
   
