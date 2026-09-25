#include <cstdio>
int main () {
    int r ;
    int y , x ;
    printf("entrer le rayon") ;
    scanf("%d" ,&r);
    for(y=-r ; y<=r ; y++){
        for(x=-r  ; x<=r ; x++){
            if(x*x + y*y<= r*r){
                printf("##") ;
            } else {
                printf("  ") ;
            }
        }
        printf("\n") ; 
    }
    return 0 ;
  }
