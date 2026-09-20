apres avoir compiler un meme programme avec les compilateurs clang++ et g++ , on remarque que les sorties sont pareils comme le presente ces lignes de terminal : 
```chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ clang++ -Wall -Wextra c1-exo7_main.cpp -o prog_clang.exe

chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ ./prog_clang.exe
bonjour
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ g++ -Wall -Wextra c1-exo7_main.cpp -o prog_gpp.exe

chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ ./prog_gpp.exe 
bonjour 
````
cependant au niveau de la taille on obtient pour clang++ 72563 octets et pour g++ 73641 octets comme le presente ces lignes de code : 
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
 ```$ ls -l prog_clang.exe  prog_gpp.exe
-rwxr-xr-x 1 chris chris 72563 Sep 20 00:35 prog_clang.exe
-rwxr-xr-x 1 chris chris 73641 Sep 20 00:37 prog_gpp.exe
````
qui sont des tailles differentes .
on peut donc conclut que le langage garantit la meme sorties et alternativement ne garantit pas la taille de l'executable .

