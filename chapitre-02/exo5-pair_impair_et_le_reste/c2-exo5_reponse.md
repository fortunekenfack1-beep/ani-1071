en utilisant le bout de code suivant 
```
#include <cstdio>
int main () {
    int nbre ;

    printf("entrer un nombre entier") ;
    scanf("%d", &nbre) ;
    if ( nbre%2==0) {
        printf("le nombre est pair") ;
    } else  {
        printf("le nombre est impair") ;
    }  if ( nbre>0) {
        printf(" & le nombre est positif") ;
    } else if ( nbre<0) {
        printf("& le nombre est negatif") ;
    } else {
        printf(" & le nombre est nul") ;
        } if(nbre%3==0) {
            printf(" & le nombre est multiple de 3") ;
        } else {
            printf(" & le nombre n'est pas multiple de 3") ;
        }
```
nous avons pu avoir un programme respectant les normes de l'exercice en testant avec les valeurs demander nous obtenons
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ ./prog
entrer un nombre entier 0
le nombre est pair & le nombre est nul & le nombre est multiple de 3
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ clang++ tst1.cpp -o prog

chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ ./prog
entrer un nombre entier -9
le nombre est impair& le nombre est negatif & le nombre est multiple de 3
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ ./prog
entrer un nombre entier12
le nombre est pair & le nombre est positif & le nombre est multiple de 3
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ ./prog
entrer un nombre entier7
le nombre est impair & le nombre est positif & le nombre n'est pas multiple de 3
```
en conclusion l'utilisation de plusieur if rend notre raisonnement plus visible et plusieurs resultats sur une meme ligne


        return 0 ;
    
}
