le programme pour tester la parité est
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
en utilisant la commande de compilation et d'execution
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ clang++ test3.cpp -o programme

chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ ./programme
```
on obtient notre programme qui fonctionne normalement d'après ces diffèrents tests
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ ./programme
entrer un nombre n 
4
0
```
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ ./programme
entrer un nombre n 
3
1
```
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ ./programme
entrer un nombre n 
-4
0
```
