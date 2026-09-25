#include <cstdio>
int main () {
 signed int nbre ;
 int cmp  ;
 cmp = 0 ;
 printf("entrer un nombre");
 scanf("%d" , &nbre);
while(nbre>0){
    nbre = nbre/10 ; 
    cmp=cmp+1 ; 
    }
    printf("ce nombre compte %d chiffres" , cmp) ; 
  
return 0 ;
}
