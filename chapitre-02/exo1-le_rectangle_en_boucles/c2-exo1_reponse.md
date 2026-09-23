le code correspondant a l'ancienne version du rectangle est
```
#include <cstdio>
int main () {
    printf("####################\n") ;
    printf("#                  #\n") ;
    printf("#                  #\n") ;
    printf("#                  #\n") ;
    printf("#                  #\n") ;
    printf("#                  #\n") ;
    printf("####################\n") ;
    return 0 ;
}
```
en reecrivant ce code avec 02 boucles imbriques , on obtient le code present dans le fichier c2-exo1_main.cpp . ce bout de code compte
au total 15 lignes soit 3 lignes de printf , 6 lignes pour les conditions. par rapport a la premiere version  qui etait 7 ligne , l'utilisation des boucles facilite instantanement la tache . en prolongeant a 12 lignes et 40 colonnes, on obtient le nouveau code suivant
```
#include <cstdio>
int main () {
    int i , j;

    for (i=1 ; i<=12 ; i++) {
    for (j=1 ; j<=40 ; j++) {
        if (i==1 || i==12 || j==1 || j==40) {
            printf("#") ;
        } else {
            printf(" ") ;
        }
    }
    printf("\n");
    }
    return 0;
}
```
nous avons dans ce programme modifier uniquement le nombre de ligne et de colonne et apres compilation , nous observons ce resultat
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ clang++ c2-exo1_main.cpp -o prog

chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ ./prog
########################################
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
#                                      #
########################################
```
ce qui montre que l'utilisation des boucles rend le code plus court et plus facile a executer .
