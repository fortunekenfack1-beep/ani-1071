#include <iostream>
#include<cstdint>
unsigned int factorielle32(unsigned int n);
unsigned long long  factorielle64(unsigned long long  n);

unsigned int factorielle32(unsigned int n){
    unsigned int r=1;
    for(int i=2 ; i<=n ; i++){
        r *= i ; 
    }
    return r ;
}
unsigned long long  factorielle64(unsigned long long n){
      unsigned long long  r=1;
    for(int i=2 ; i<=n ; i++){
        r *= i ; 
    }
    return r ;
}

int main(){
    int n ;
    std::cin >> n ;
    std::cout<<factorielle32(n) <<"\n" ;
    std::cout<<factorielle64(n) <<"\n" ;
    return 0 ;
}
