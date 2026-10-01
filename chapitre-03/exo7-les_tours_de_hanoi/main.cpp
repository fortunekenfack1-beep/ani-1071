#include <iostream>

long long total = 0 ;
void hanoi(int n , char depart , char arrivee , char intermediaire ) ;

void hanoi(int n , char depart , char arrivee , char intermediaire ) {
    if (n<=0) return ;
    hanoi(n-1 , depart , intermediaire, arrivee) ;
    std::cout<<depart << ">" <<arrivee <<"\n" ;
    total++ ;
    hanoi(n-1 , intermediaire, arrivee, depart);


}
int main() {
    int n ; 
    std::cin>> n ;
    hanoi(n , 'A','C','B') ;
    std::cout<<  total <<"\n";
    return 0 ;
}
