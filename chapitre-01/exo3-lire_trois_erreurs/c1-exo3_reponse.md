 * en cas d'absence d'un point virgule clang affiche :  c1-exo3_main.cpp:7:25: error: expected ';' after expression
    7 |     printf (" YAOUNDE ")  
      |                         ^
      |                         ;
1 error generated.
.le compilateur l'affiche car le point virgule marque la fin d'une instruction sans point virgule le programme voit cela comme une instruction non determiner
 
 
 * cas dans lequel on remplace printf par Printf : 
c1-exo3_main.cpp:5:5: error: use of undeclared identifier 'Printf'; did you mean 'printf'?
    5 |     Printf ( "YEMFO KENFACK CHRISTABELLE FORTUNE \n" ) ;
      |     ^~~~~~
      |     printf
C:/msys64/ucrt64/include/stdio.h:300:5: note: 'printf' declared here
  300 | int printf (const char *__format, ...)
      |     ^
c1-exo3_main.cpp:7:5: error: use of undeclared identifier 'Printf'; did you mean 'printf'?
    7 |     Printf (" YAOUNDE ")  ;
      |     ^~~~~~
      .vu que le C++ est susceptible a la casse, il voit printf et Printf comme 2 instructions differentes


   * en retirant #include<cstdio> dans notre programme nous avons : c1-exo3_main.cpp:6:5: error: use of undeclared identifier 'printf'
    6 |     printf( "YEMFO KENFACK CHRISTABELLE FORTUNE \n" ) ;
      |     ^~~~~~
c1-exo3_main.cpp:8:5: error: use of undeclared identifier 'printf'
    8 |     printf (" YAOUNDE ")  ;
      |     ^~~~~~
2 errors generated
. cela apparait car sans la bibliotheque le compilateur ne reconnais pas printf et tous les autres intructions.
