#include <cstdio>
int main () {
    int i , som=0 ,nbre=0 ;
    float moy ;

    for(i=1 ; i<=5 ; i++){
        printf("entrer un nombre");
        scanf("%d" , &nbre);
         som= som + nbre ;
}
printf("la somme est %d" , som) ;
double moy = (double)som / 5;
printf(" Et la moyenne est %f" , moy) ;
return 0 ;
}
