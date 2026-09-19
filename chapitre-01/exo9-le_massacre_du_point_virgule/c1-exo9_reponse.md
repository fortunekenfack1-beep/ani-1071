en retirant tous les points virgules dans le programme on obtient cette ligne d'erreur : 4 |     int n  
      |          ^
      |          ;
      en remettant le point virgule sur la declaration de n on obtient pour le reste du code les lignes d'erreur suivante : c1-exo9_main.cpp:5:45: error: expected ';' after expression
    5 |     printf ("entrer un  nombre entier  \n ") 
      |                                             ^
      |                                             ;
c1-exo9_main.cpp:6:22: error: expected ';' after expression
    6 |     scanf("%d" , & n) 
      |                      ^
      |                      ;
c1-exo9_main.cpp:7:56: error: expected ';' after expression
    7 |     printf("le double de ce nombre est : %d " ,   n*2 )
      |                                                        ^
      |                                                        ;
c1-exo9_main.cpp:8:13: error: expected ';' after return statement
    8 |     return 0 
      |             ^
      |             ;
4 errors generated.
nous observons exactement 4 erreurs . en remettant le premier point virgule on obtient desormais 03 messages d'erreur ainsi de suite jusqu'a la fin.
