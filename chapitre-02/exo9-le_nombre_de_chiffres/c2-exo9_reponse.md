en executant notre code on obtient pour les valeurs demander les resultats suivant
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ clang++ c2-exo9_main.cpp -o prog

chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ ./prog
entrer un nombre7
ce nombre compte 1 chiffres
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ ./prog
entrer un nombre42
ce nombre compte 2 chiffres
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ ./prog
entrer un nombre1000
ce nombre compte 4 chiffres
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ ./prog
entrer un nombre2147483647
ce nombre compte 10 chiffres
```
en utilisant 0 on a 
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ ./prog
entrer un nombre0
```
or ce qui n'est pas vrai car 0 possede un chiffre
ce nombre compte 0 chiffres
