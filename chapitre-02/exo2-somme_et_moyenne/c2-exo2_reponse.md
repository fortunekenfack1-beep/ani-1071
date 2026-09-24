le programme permettant de realiser l'exercice est celui ci dessous
```
#include <cstdio>
int main () {
    int i , som=0 ,nbre=0 ;
    float moy ;

    for(i=1 ; i<=5 ; i++){
        printf("entrer un nombre");
        scanf("%d" , &nbre);
         som= som + nbre ;
}
printf("la somme est %d" , som) ;
moy = som / 5.0 ;
printf(" Et la moyenne est %f" , moy) ;
return 0 ;
}
```
apres compilation et execution , en utilisant les chiffres données dans la consigne , on obtient le resultat suivant
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ clang++ tst3.cpp -o prog

chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ ./prog
entrer un nombre7
entrer un nombre8
entrer un nombre9
entrer un nombre10
entrer un nombre10
la somme est 44 Et la moyenne est 8.800000
```
notre programme fonctionne normalement 
