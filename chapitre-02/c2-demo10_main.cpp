#include <cstdio>
int main(){
   float x , X , d ;
   float n ;
   int t;
   printf("entrer une valeur");
   scanf("%f" , &n);
   x=n ;
   t=0 ;
while(true){
    X=(x+n/x)/2.0;
    d= X-x ;
    if(d<0){
        d = - d ;
    }
    x=X;
      t=t+1 ;
      if(d<1e-9){
        break ;
      }
}
printf("le nombre de tours est %d et la racine carre du nombre est %f" , t , x) ;
return 0;
 }