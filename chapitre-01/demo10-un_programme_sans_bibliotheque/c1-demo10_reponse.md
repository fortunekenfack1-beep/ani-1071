notre programme est : 
``` int  main() {
    return 7 ;
}
````
pour la compilation nous avons utiliser 
``` chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ clang++ c1-demo10_main.cpp -o prog

chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ ./prog

chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ echo $?
7
````
pour verifier la taille de l'executable et celui qui affiche bonjour , nous avons utiliser 
```$ ls -l prog  programme_bonjour
-rwxr-xr-x 1 chris chris 37666 Sep 20 07:56 prog
-rwxr-xr-x 1 chris chris 72563 Sep 20 08:04 programme_bonjour
````
nous pouvons voir que les tailles ne sont pas pareil cet ecart est du au fait que le code source de bonjour.cpp contient la fonction
printf qui grace a l'editeur de liens apporte les codes de cette fonction . on peut donc dire que notre executable programme_bonjour
a recu le code de la fonction printf en complement , cet ajout est fait par l'editeur de liens.
