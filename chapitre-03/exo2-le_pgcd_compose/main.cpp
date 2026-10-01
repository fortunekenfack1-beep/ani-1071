#include <iostream>

long long pgcd(long long a , long long b);
long long ppcm(long long a , long long b);

long long pgcd(long long a , long long b) {
    if(a<0) a=-a ;
    if(b<0) b=-b ; 

   while( b!= 0){
    long long r = a % b;
    a=b;
    b=r;
        }
    return a ;
      }
    
     long long ppcm(long long a , long long b){
        if(a==0 || b==0)  return 0 ;
          if(a<0) a=-a ;
          if(b<0) b=-b ;
        
        return (a / pgcd(a , b)) * b ;

     } 

int main () {
     bool vide = true ;
    long long a = 0;
    long long  b=0 ;

    while (std::cin >> a >>b){
    std::cout<< pgcd( a , b)  <<"\n" ;
    std::cout<<ppcm(a , b) << "\n" ;
    vide = false ;
   }
     if(vide){ 
        std::cout<<"AUCUN\n";
     }
   return 0 ;
}
