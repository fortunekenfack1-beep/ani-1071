#include <cstdio>
int main () { 
    int a , b ;
    printf("entrer un entiers : ") ;
    scanf("%d" , &a) ;
    printf("entrer un entiers : ") ;
    scanf("%d" , &b) ;
    a>b ? printf("%d est le plus grand\n" , a) : printf("%d est le plus grand\n" , b) ;
    a%2==0 ? printf("%d est pair\n" , a) : printf("%d est impair\n" , a) ;
    a==1 ? printf("%d objet\n" , a) : printf("%d objets\n" , a) ;
    b==1 ? printf("%d objet\n" , b) : printf("%d objets\n" , b) ;
    return 0 ; 
}
