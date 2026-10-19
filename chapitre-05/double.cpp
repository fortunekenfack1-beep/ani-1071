#include<iostream>
int main(){
    int* t = new int[10]  ;
t[0] = 32 ;
std::cout <<t[0]<<"\n";
delete[] t ;
delete[] t ;
std::cout<< "fin programme : " <<t[0]<<"\n";
return 0 ;
}