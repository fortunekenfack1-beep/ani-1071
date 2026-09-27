#include <cstdio>
int main () { 
    int a , b ;
    printf("entrer un entiers : ") ;
    scanf("%d" , &a) ;
    printf("entrer un entiers : ") ;
    scanf("%d" , &b) ;
    a>b ? printf("%d est le plus grand " , a) : printf("%d est le plus petit " , b) ;
    a%2==0 ? printf("%d est pair " , a) : printf("%d est impair" , a) ;
    a==1 ? printf("%d objet " , a) : printf("%d objets" , a) ;
    b==1 ? printf("%d objet " , b) : printf("%d objets" , b) ;
    return 0 ; 
}
