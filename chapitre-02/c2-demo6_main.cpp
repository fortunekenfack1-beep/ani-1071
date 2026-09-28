#include <cstdio>
 int main(){
    int x;
    int essai , cmpt ;
    cmpt=0 ;
    printf("entrer le nombre a deviner ");
    scanf("%d", &x);
    do{
        printf("proposition : ");
        scanf("%d", &essai) ;
        cmpt++;
        if(essai<x){
            printf("plus \n");
        }else  {
            printf("moins\n");
        } 
     }
    while(x!=essai);
        printf("le nombre est trouve en %d essais" , cmpt);
        return 0;
    }
    