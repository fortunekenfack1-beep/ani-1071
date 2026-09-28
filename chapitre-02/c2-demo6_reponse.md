en executant notre programme on obtient 
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ ./programme
entrer le nombre a deviner 65
proposition : 3
plus 
proposition : 45
plus 
proposition : 54
plus 
proposition : 68
moins
proposition : 60
plus 
proposition : 64
plus 
proposition : 65
moins
le nombre est trouve en 7 essais
```
le nombre d'essai minimal est celui qui couvre en majorie toute la plage de nombre(0-100) pour trouver ce nombre on utilise la formule 2^k -1 cette formule est la formule de dichotomie , en variant k dans la formule , on obtient pour k=7 127 qui est superieur a 100 donc on peut dire que le nombre d'essai minimal est 7 . 
