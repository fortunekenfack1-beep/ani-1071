#include <cstdio>
int main () {
    int n , cmp=0 ;
    printf("entrer un nombre");
    scanf("%d" , & n);
    while (n!=1) { 
        if (n%2==0){
            n=n/2 ; 
        }
        else{
            n=n*3+1 ;

        }
           cmp=cmp+1 ;

    }
    printf(" le nombre d'etapes est %d" , cmp);
    return 0 ; 
    }