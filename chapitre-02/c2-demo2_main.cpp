#include <cstdio>
#include <cmath>
int main () {
    double v=0.0 ;
    double p=100;
    double tmp=0.0;
    double dt ;
    double h  ; 
     dt= 0.01 ;
     int c=0;
    while(true) {
        v=v+(9.8*dt) ;
        p=p-(v*dt);
        tmp=tmp+dt ;
        if(p>h){
            h=p ;
        }
        if(p<=0) {
            p=0;
            v= -v*0.8 ;
            c=c+1 ;
            printf("rebond %d : hauteur max atteinte avant ce rebond = %.3f m\n" , c , h);
            h=0.0 ;
            if( fabs(v) < 0.1) {
                break ; 
            }
        }
        printf("t = %3.f s | p=%3.f m \n" , tmp , p) ;
         }
        printf("le temps d'impact est %f " ,tmp );
        printf("\nNombre total de rebonds : %d\n", c) ;
        return 0 ;
         }
  
