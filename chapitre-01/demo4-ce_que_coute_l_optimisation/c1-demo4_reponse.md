en utilisant notre programme bonjour.cpp , nous avons determiner les temps d'executions suivante 
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ time clang++ -O2  bonjour.cpp -o main_02

real    0m1.297s
user    0m0.092s
sys     0m0.092s

chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ time clang++   bonjour.cpp -o main_00

real    0m1.395s
user    0m0.091s
sys     0m0.076s
```
en observant nous voyons que le temp de compilation de la commande sans -O2 est different de celui avec -O2 . consernant les tailles
nous avons 
```
-rwxr-xr-x 1 chris chris 72563 Sep 20 21:27 main_00
-rwxr-xr-x 1 chris chris 72563 Sep 20 21:27 main_02
```
nous observons que les tailles des sorties sont identiques . 

en utilisant notre programme million.cpp 
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ time clang++ -O2  million.cpp -o million_02

real    0m0.926s
user    0m0.107s
sys     0m0.107s

chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-01
$ time clang++ million.cpp -o million_00

real    0m0.951s
user    0m0.060s
sys     0m0.091s
```
dans ce cas le temp de compilation de la commande sans -O2 est different de celui avec -O2 . concernant les tailles , on a 
```
-rwxr-xr-x 1 chris chris 72563 Sep 20 21:43 million_00
-rwxr-xr-x 1 chris chris 72563 Sep 20 21:43 million_02
```
nous observons que les tailles sont identiques
en conclusion on peut voir que l'option -O2 change le temps de compilations et cet option ne change pas le resultat attendu et 
la taille des fichiers.
