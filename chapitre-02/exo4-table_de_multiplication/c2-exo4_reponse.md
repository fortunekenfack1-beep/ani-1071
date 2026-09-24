apres compilation et execution du code , on obtient 
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ clang++ c2-exo4_main.cpp -o prog

chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ ./prog
   1   2   3   4   5   6   7   8   9  10
   2   4   6   8  10  12  14  16  18  20
   3   6   9  12  15  18  21  24  27  30
   4   8  12  16  20  24  28  32  36  40
   5  10  15  20  25  30  35  40  45  50
   6  12  18  24  30  36  42  48  54  60
   7  14  21  28  35  42  49  56  63  70
   8  16  24  32  40  48  56  64  72  80
   9  18  27  36  45  54  63  72  81  90
  10  20  30  40  50  60  70  80  90 100
```
pour voir exactement a quoi sert %4d , on doit tous d'abord l'enlever et le remplacer par %d et ensuite comparer
en remplaçant on a 
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ clang++ c2-exo4_main.cpp -o prog

chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ ./prog
12345678910
2468101214161820
36912151821242730
481216202428323640
5101520253035404550
6121824303642485460
7142128354249566370
8162432404856647280
9182736455463728190
102030405060708090100
```
ainsi la difference est visible et le role de %4d est de reserver quatre caractere entre chaque resultat 
favorisant ainsi la lisibilite et la comprehension
