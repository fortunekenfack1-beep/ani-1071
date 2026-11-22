#include<iostream>
int pas ;
long long n ;
long long seau= 0 ;
long long total = 0 ;
int main(){
    std::cin>> pas >> n ;
    for(int i = 1 ; i <= n ; i++){
        int pasImage = 0 ;
        int duree ;
        std::cin>> duree ;
        seau += duree ;
        while( pas> 0 && seau >= pas){
            seau -= pas ;
            pasImage += 1 ;
        } 
        total += pasImage ;
        std::cout<< i << " "<<pasImage<<" "<<seau<<"\n" ;
    }
    std::cout<<"PAS TOTAL "<< total <<"\n";
    std::cout<<"RESTE FINAL "<<seau<<"\n";
    return 0 ;                                                             
}
