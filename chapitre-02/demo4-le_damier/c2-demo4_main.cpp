#include <cstdio>
int main () {
    int x , lig ;
    int y , col; 
    for(lig=0; lig<16 ; lig++){
        for(col=0 ; col<32 ; col++){
            x=col/4 ;
            y=lig/2 ;
            printf("%c" , ((x+y)%2==0) ? '#' : ' ' );
               }
                printf("\n") ;
        }
    }
