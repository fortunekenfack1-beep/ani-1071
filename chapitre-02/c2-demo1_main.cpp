#include <cstdio>
int main () {
    double v=0.0 ;
    double p=100;
    double tmp=0.0;
    double dt ;
     dt= 1 ;
    while(p>0){
        
        v=v+(9.8*dt) ;
        p=p-(v*dt);
        tmp=tmp+1;
        printf("t = %3.f s | p=%3.f m \n" , tmp , p) ;
         }
        printf("le temps d'impact est %f:" ,tmp);
        return 0 ;
         }
  
