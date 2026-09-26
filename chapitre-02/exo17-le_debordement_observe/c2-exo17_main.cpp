#include <cstdio>
int main () {
    int x=1, cmpt=0 ;
    for(cmpt=0 ; cmpt<63 ; cmpt++){
        x=x*2 ;
        cmpt=cmpt+1;
        printf("x = %d\n", x);
        printf("cmpt = %d\n", cmpt) ;
    if(x<0){
        printf("le nombre devient negatif au bout de %d iterations\n", cmpt);
    }else if(x==0){
        printf("le nombre devient nul au bout de %d iterations\n", cmpt);
    }else{
        printf(" ") ;
    }
        }
    return 0 ;
}
