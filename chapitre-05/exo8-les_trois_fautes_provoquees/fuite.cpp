#include<iostream>
int main(){
    for(int i=0 ; i<1000 ; i++){
        int* tableau = new int[1000];
        tableau[0]= i ;
        std::cout<< tableau[0]<<"\n";
    }
    return 0 ; 
}
