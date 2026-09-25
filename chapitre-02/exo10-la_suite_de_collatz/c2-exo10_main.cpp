#include <cstdio>
int main () {
    int n , cmp=0 ;
    printf("entrer un nombre");
    scanf("%d" , & n);
    while (n!=1) { 
        if (n%2==0){
            n=n/2 ; 
        }
        else{
            n=n*3+1 ;

        }
           cmp=cmp+1 ;

    }
    printf(" le nombre d'etapes est %d" , cmp);
    return 0 ; 
    }


en verifiant le code avec 27 on a 
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ clang++ c2-exo10_main.cpp -o programme

chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ ./programme
entrer un nombre27
 le nombre d'etapes est 111
    ```
