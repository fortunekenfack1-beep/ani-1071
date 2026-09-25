#include <cstdio>
int main () {
    int i, j ;
    bool premier= false ; 
    for(i=2 ; i<=100 ; i++) {
        for(j=2 ; j<=i-1 ; j++) {
            if(i%j==0) {
                premier= false ;
                break ;
            }
        }
        if(j==i) {
            printf("%d est un nombre premier\n" , i);
        }
    }
    return 0 ;
}
