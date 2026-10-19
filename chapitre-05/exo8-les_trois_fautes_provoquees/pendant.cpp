#include<iostream>
int main(){
    int* tab = new int[10] ;
    tab[0] = 12 ;
    std::cout<<"avant : " <<tab[0]<<"\n";
    delete[] tab ;
    std::cout<<"apres : " <<tab[0] ;
    return 0 ;
}