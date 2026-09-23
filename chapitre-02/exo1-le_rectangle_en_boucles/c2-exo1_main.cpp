#include <cstdio>
int main () {
    int i , j;

    for (i=1 ; i<=7 ; i++) {
    for (j=1 ; j<=20 ; j++) {
        if (i==1 || i==7 || j==1 || j==20) {
            printf("#") ;
        } else {
            printf(" ") ;
        }
    }
    printf("\n");
    }
    return 0;
}
