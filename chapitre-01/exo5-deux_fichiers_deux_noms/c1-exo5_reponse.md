en compilant avec  -o essai_un on obtient :
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ clang++ c1-exo5_main.cpp -o essai_un

chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ ./essai_un
bonjour a tous 
```

ce qui montre effectivement que le programme marche correctement

Dans le second cas on obtient :
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ clang++ c1-exo5_main.cpp -o essai_deux

chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ ./essai_deux
bonjour a tous
```
ce qui s'execute correctement 
en conclusion on peut dire que  le code source qui a pour extention .cpp devient un programme apres compilation et execution du code donc peut importe le nom qu'on attribu a un executable  cela ne modifira pas le resultat ainsi on peut conclut que le programme produit ne depend pas du nom qu'on lui attribu . Lorsqu'on ne met pas -o on obtient ce resultat 
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ clang++ c1-exo5_main.cpp 

chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ ls
a.exe                 
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ ./a.exe
bonjour a tous
```
on constate que par defaut , mon executable a pris le nom a.exe 

