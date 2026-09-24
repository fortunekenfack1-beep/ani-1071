#include <cstdio>
int main () {
    int nbre ;

    printf("entrer un nombre entier") ;
    scanf("%d", &nbre) ;
    if ( nbre%2==0) {
        printf("le nombre est pair") ;
    } else  {
        printf("le nombre est impair") ;
    } 
     if ( nbre>0) {
        printf(" & le nombre est positif") ;
    } else if ( nbre<0) {
        printf(" & le nombre est negatif") ;
    } else {
        printf(" & le nombre est nul") ;
        } if(nbre%3==0) {
            printf(" & le nombre est multiple de 3") ;
        } else {
            printf(" & le nombre n'est pas multiple de 3") ;
        }

        return 0 ;
    
}