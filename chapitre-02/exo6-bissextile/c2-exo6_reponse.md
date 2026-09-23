le code ayant permis de vois si une annee est bissextile est 
```
#include <cstdio>
int main () {
    int annee ;
    printf("entrer une annee") ;
    scanf("%d", &annee) ;
    if ( annee%4==0 && annee%100!=0 || annee%400==0) {
        printf(" oui l'annee est bissextile") ;
    } else {
        printf("non l'annee n'est pas bissextile") ;
    }
    return 0 ; 
     }
```
en testant ce code , on obtient les valeurs attendues
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ clang++ tst2.cpp -o prog

chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ ./prog
entrer une annee2100
non l'annee n'est pas bissextile
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ ./prog
entrer une annee2024
 oui l'annee est bissextile
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ ./prog
entrer une annee1900
non l'annee n'est pas bissextile
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ ./prog
entrer une annee2000
 oui l'annee est bissextile
```
tous ces années fonctionnent
