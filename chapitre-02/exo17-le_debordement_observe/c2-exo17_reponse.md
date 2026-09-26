en executant le programme on a 
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ clang++ c2-exo17_main.cpp -o programme

chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ ./programme
x = 2
cmpt = 1
 x = 4
cmpt = 3
 x = 8
cmpt = 5
 x = 16
cmpt = 7
 x = 32
cmpt = 9
 x = 64
cmpt = 11
 x = 128
cmpt = 13
 x = 256
cmpt = 15
 x = 512
cmpt = 17
 x = 1024
cmpt = 19
 x = 2048
cmpt = 21
 x = 4096
cmpt = 23
 x = 8192
cmpt = 25
 x = 16384
cmpt = 27
 x = 32768
cmpt = 29
 x = 65536
cmpt = 31
 x = 131072
cmpt = 33
 x = 262144
cmpt = 35
 x = 524288
cmpt = 37
 x = 1048576
cmpt = 39
 x = 2097152
cmpt = 41
 x = 4194304
cmpt = 43
 x = 8388608
cmpt = 45
 x = 16777216
cmpt = 47
 x = 33554432
cmpt = 49
 x = 67108864
cmpt = 51
 x = 134217728
cmpt = 53
 x = 268435456
cmpt = 55
 x = 536870912
cmpt = 57
 x = 1073741824
cmpt = 59
 x = -2147483648
cmpt = 61
le nombre devient negatif au bout de 61 iterations
x = 0
cmpt = 63
le nombre devient nul au bout de 63 iterations
```
a un niveau le nombre devient negatif car la 32eme case de gauche appele signe dans le format int indique uniquement le signe des nombres quand cette case vaut 0 alors le nombre
est positif or lorsqu'il vaut 1 il devient negatif. le nombre devient nul car lorsque le nombre atteint son maximum de bit dans un int , il ne peut plus avancer dans une autre case 
et le nombre supprime immediatement. en utilisant long on obtient 
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ clang++ c2-exo17_main.cpp -o programme

chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ ./programme
x = 2
cmpt = 1
 x = 4
cmpt = 3
 x = 8
cmpt = 5
 x = 16
cmpt = 7
 x = 32
cmpt = 9
 x = 64
cmpt = 11
 x = 128
cmpt = 13
 x = 256
cmpt = 15
 x = 512
cmpt = 17
 x = 1024
cmpt = 19
 x = 2048
cmpt = 21
 x = 4096
cmpt = 23
 x = 8192
cmpt = 25
 x = 16384
cmpt = 27
 x = 32768
cmpt = 29
 x = 65536
cmpt = 31
 x = 131072
cmpt = 33
 x = 262144
cmpt = 35
 x = 524288
cmpt = 37
 x = 1048576
cmpt = 39
 x = 2097152
cmpt = 41
 x = 4194304
cmpt = 43
 x = 8388608
cmpt = 45
 x = 16777216
cmpt = 47
 x = 33554432
cmpt = 49
 x = 67108864
cmpt = 51
 x = 134217728
cmpt = 53
 x = 268435456
cmpt = 55
 x = 536870912
cmpt = 57
 x = 1073741824
cmpt = 59
 x = -2147483648
cmpt = 61
le nombre devient negatif au bout de 61 iterations
x = 0
cmpt = 63
le nombre devient nul au bout de 63 iterations

chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ clang++ c2-exo17_main.cpp -o programme

chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ ./programme
x = 2
cmpt = 1
 x = 4
cmpt = 3
 x = 8
cmpt = 5
 x = 16
cmpt = 7
 x = 32
cmpt = 9
 x = 64
cmpt = 11
 x = 128
cmpt = 13
 x = 256
cmpt = 15
 x = 512
cmpt = 17
 x = 1024
cmpt = 19
 x = 2048
cmpt = 21
 x = 4096
cmpt = 23
 x = 8192
cmpt = 25
 x = 16384
cmpt = 27
 x = 32768
cmpt = 29
 x = 65536
cmpt = 31
 x = 131072
cmpt = 33
 x = 262144
cmpt = 35
 x = 524288
cmpt = 37
 x = 1048576
cmpt = 39
 x = 2097152
cmpt = 41
 x = 4194304
cmpt = 43
 x = 8388608
cmpt = 45
 x = 16777216
cmpt = 47
 x = 33554432
cmpt = 49
 x = 67108864
cmpt = 51
 x = 134217728
cmpt = 53
 x = 268435456
cmpt = 55
 x = 536870912
cmpt = 57
 x = 1073741824
cmpt = 59
 x = 2147483648
cmpt = 61
 x = 4294967296
cmpt = 63
```
on observe qu'a la 63eme iteration le nombre est toujours positif cela s'explique par le nombre de bit eleve de long long qui est de 64 bits
en utilisant unsigned int  on a 
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ clang++ c2-exo17_main.cpp -o programme

chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ ./programme
x = 2
cmpt = 1
 x = 4
cmpt = 3
 x = 8
cmpt = 5
 x = 16
cmpt = 7
 x = 32
cmpt = 9
 x = 64
cmpt = 11
 x = 128
cmpt = 13
 x = 256
cmpt = 15
 x = 512
cmpt = 17
 x = 1024
cmpt = 19
 x = 2048
cmpt = 21
 x = 4096
cmpt = 23
 x = 8192
cmpt = 25
 x = 16384
cmpt = 27
 x = 32768
cmpt = 29
 x = 65536
cmpt = 31
 x = 131072
cmpt = 33
 x = 262144
cmpt = 35
 x = 524288
cmpt = 37
 x = 1048576
cmpt = 39
 x = 2097152
cmpt = 41
 x = 4194304
cmpt = 43
 x = 8388608
cmpt = 45
 x = 16777216
cmpt = 47
 x = 33554432
cmpt = 49
 x = 67108864
cmpt = 51
 x = 134217728
cmpt = 53
 x = 268435456
cmpt = 55
 x = 536870912
cmpt = 57
 x = 1073741824
cmpt = 59
 x = -2147483648
cmpt = 61
 x = 0
cmpt = 63
le nombre devient nul au bout de 63 iterations
```
ce qui ne change pas reellement le resultat obtenu avec int
en utilisant x<<=1   au lieu de x=*2 ont a 
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ clang++ c2-exo17_main.cpp -o programme

chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ ./programme
x = 2
cmpt = 1
 x = 4
cmpt = 3
 x = 8
cmpt = 5
 x = 16
cmpt = 7
 x = 32
cmpt = 9
 x = 64
cmpt = 11
 x = 128
cmpt = 13
 x = 256
cmpt = 15
 x = 512
cmpt = 17
 x = 1024
cmpt = 19
 x = 2048
cmpt = 21
 x = 4096
cmpt = 23
 x = 8192
cmpt = 25
 x = 16384
cmpt = 27
 x = 32768
cmpt = 29
 x = 65536
cmpt = 31
 x = 131072
cmpt = 33
 x = 262144
cmpt = 35
 x = 524288
cmpt = 37
 x = 1048576
cmpt = 39
 x = 2097152
cmpt = 41
 x = 4194304
cmpt = 43
 x = 8388608
cmpt = 45
 x = 16777216
cmpt = 47
 x = 33554432
cmpt = 49
 x = 67108864
cmpt = 51
 x = 134217728
cmpt = 53
 x = 268435456
cmpt = 55
 x = 536870912
cmpt = 57
 x = 1073741824
cmpt = 59
 x = 2147483648
cmpt = 61
 x = 0
cmpt = 63
le nombre devient nul au bout de 63 iterations
```
on observe le presque le meme resultat qu'avec x=x*2 a la difference qu'on obtient pas une iteration negative car elle convertir les nombres en binaire , leur decale et leur renvoit
en decimal . 





