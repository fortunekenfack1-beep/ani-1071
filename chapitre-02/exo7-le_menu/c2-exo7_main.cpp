#include <cstdio>
int main () { 
    int menu ; 
    printf("1.Nouvelle partie\n") ;
    printf("2.Charger une partie\n") ;
    printf("3.options\n") ;
    printf("4.Quitter\n") ;
    scanf("%d" , &menu) ;
    switch(menu) {
        case 1 : 
            printf("nouvelle partie\n") ;
        case 2 : 
            printf("charger une partie\n") ;
            break ;
        case 3 : 
            printf("options\n") ;
            break ;
        case 4 : 
            printf("quitter\n") ;
            break ;
        default :
            printf("erreur de saisie\n") ;
    }
    return 0 ;
}
