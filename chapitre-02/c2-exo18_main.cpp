#include <cstdio>
int main () {
    int a , b ,r=0 , d=0 , cmpt=0 , cmpt2=0;
    printf("entrer un nombre");
    scanf("%d" , &a);
    printf("entrer un second nombre ");
    scanf("%d" , &b);
    while(a!=b){
        if(a>b){
            a=a-b;
    } else{
        b=b-a ;
    }
    cmpt++;
     }
     printf("le pgcd obtenu avec la soustraction est %d" , b);
     printf(" et son  nombre d'iterations est %d" , cmpt);
     while(b!=0){
        d=a%b ;
        a=b ;
        b=d ;
        cmpt2++;
     }
      printf(" Et le pgcd obtenu avec la division est %d" , a);
      printf(" et son  nombre d'iterations est %d" , cmpt2);
      return 0 ;


   }
