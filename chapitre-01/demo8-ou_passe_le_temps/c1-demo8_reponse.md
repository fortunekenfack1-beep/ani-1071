en utilisant notre programme bonjour.cpp on chronomètre le temps de compilation et celui de l'exécution. La commande utiliser pour
chronométrer la compilation est 
```
 chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ time clang++ bonjour.cpp -o prog.exe
```
et celui de l'exécution est 
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ time ./prog.exe
```
et on obtient  :" real    0m0.910s" pour le temp de compilation et "real    0m0.387s" pour le temp d'exécution donc on peut conclut 
que le temps de compilation est supérieur au temps d'exécutions 
en répétant l'opération avec un fichier qui inclut 5 entêtes on obtient ce code 
```
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <vector>
int main () {
    printf("bonjour") ;
    return 0 ;

}
```
et en utilisant les commandes précédentes pour mesurer le temps , on obtient "real    0m2.882s" pour le temp de compilation et "real    0m0.331s"  on voit donc que le temps de compilation a pratiquer tripler et celui de l'exécution a plutôt baisser on peut dire que la multiplication d'entête augmente le temps de compilation et ne change pratiquement pas le temps d'execution.

Sur un projet réel on cherche a réduire l'entête car lorsqu'une entête est utiliser , #include ajoute des milliers de fichiers a ceux existant déjà et plus les lignes d'un code sont longue plus la compilation prend du temps or un développeur par jour a des centaines de compilation si toutes ces compilations prennent plus 1h il ne pourra pas compiler tous ces programme c'est pourquoi il reduit au max les entetes.
