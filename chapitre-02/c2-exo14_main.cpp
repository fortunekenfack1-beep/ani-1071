#include <cstdio>
int main () { 
    int h , k , j ;
    printf("entrer une hauteur") ;
    scanf("%d" , &h);
    for(k=1 ; k<=h ; k++) {
        for(j=1 ; j<=h-k ; j++) {
        printf(" ") ;
        }
        for(int j=1 ; j<=2*k-1 ; j++) {
            printf("*") ;
        }
        printf("\n") ;
        }
        return 0 ;

    
    }