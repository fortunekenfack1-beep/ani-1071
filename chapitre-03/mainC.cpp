#include <iostream>
int chiffresRecursif(int n) ;
int sommeChiffresRecursif(int n);

int chiffresRecursif(int n) {
    if(n>-10 && n<10) return 1 ;
    return 1 + chiffresRecursif(n/10) ;

}
int sommeChiffresRecursif(int n){
    if(n > -10 && n < 10) return n < 0 ? -n : n ;
    int d = n % 10;
    if(d < 0) d = -d ;
    return d + sommeChiffresRecursif(n / 10);
}
int main(){
    int n ;
    bool vide = true ;
    while(std::cin>>n) {
        std::cout <<chiffresRecursif(n) <<"\n" ;
        std::cout<<sommeChiffresRecursif(n) <<"\n" ;
        vide = false ;
    }
    if (vide) std::cout<<"AUCUN\n" ;
    return 0 ;
}