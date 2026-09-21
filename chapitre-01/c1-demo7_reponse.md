en utilisant le programme precedent 
```
#include <cstdio>
int main () {
    int n  ;
    printf("entrer un nombre n \n") ;
    scanf("%d", &n) ;
    if(n % 2 == 0) {
     printf("0") ;
    } else {
    printf ("1") ;
    }
    return 0 ;
    }
```
nous avons ecrit cette ligne de commande qui n'affiche que pair si le code de sortir est 0
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ ./prog && echo "pair"
```
et nous avons eu le resultat
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ ./prog && echo "pair"
entrer un nombre n 
3
1pair
```
un second teste done
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ ./prog && echo "pair"
entrer un nombre n 
4
0pair
```
