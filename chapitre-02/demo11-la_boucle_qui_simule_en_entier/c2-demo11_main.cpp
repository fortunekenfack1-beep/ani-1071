#include <cstdio>
int main () {
    int v=0. ;
    int p=10000;
    int tmp=0;
    int  dt ;
     dt= 100 ;
    while(p>0){ 
        v=v+(9.8*dt) ;
        p=p-(v*dt);
        tmp=tmp+1;
        printf("t = %3.d s | p=%3.d mm \n" , tmp , p) ;
         }
        printf("le temps d'impact est %d:" ,tmp);
        return 0 ;
         }
  
