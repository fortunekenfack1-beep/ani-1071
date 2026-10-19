#include<iostream>
#include<cstdlib>
#include<cstring>
long long comparaisons=0  ;
bool pivotMilieu = false ; 

void echanger( int& a , int& b){
    int tmp = a ;
    a=b;
    b= tmp ;
}
 void triSelection(int t[] , int n ) {
    for(int i=0 ; i< n-1 ; i++){
        int mini = i ;
        for(int j= i+1 ; j< n ; j++){
            comparaisons++ ;
            if(t[j] < t[mini]){
                mini = j ;
            }
        }
        echanger(t[i] , t[mini]) ;
    }
 }
 void triRapide(int t[] , int bas , int haut ){
    if(bas >= haut){
        return ;
    }
    if(pivotMilieu){
        echanger(t[(bas + haut) / 2] , t[haut]) ;
    }
    int pivot = t[haut] ; 
    int i = bas ;
    for(int j = bas ; j<haut ; j++){
        comparaisons++ ;
        if(t[j] < pivot ){
            echanger(t[j] , t[i]) ;
            i++ ;
        }
    }
    echanger(t[i] , t[haut]) ;
    triRapide(t , bas ,i-1) ;
    triRapide(t , i+1 , haut) ;
 }
int main(int argc , char* argv[]){
    if(argc>=2 && std::strcmp(argv[1] , "trie")== 0){
        int n = (argc>=3 )? std::atoi(argv[2]) : 10000 ;
        pivotMilieu = (argc >= 4 ) ;
        int* t= new int[n];
        for(int k=0 ; k < n ; k++){
            t[k] = k ;
        }
        comparaisons = 0 ;
        triRapide(t , 0 , n-1);
        std::cout<<"deja trie , n="<< n 
                 <<(pivotMilieu ? " , pivot milieu" : " , pivot dernier")
                 <<": rapide="<< comparaisons <<"\n" ;
                 delete[] t ;
                 return 0 ;   
     }
 int tailles[] = { 100 , 1000 , 10000 , 100000} ;
 for(int s=0 ; s< 4 ; s++){
    int n= tailles[s] ;
    int* a = new int[n];
    int* b = new int[n] ;
    for(int k = 0 ; k<n ; k++){
        a[k] = std::rand() ;
    }
      for(int k = 0 ; k<n ; k++){
        b[k] = a[k];
    }
    comparaisons = 0 ;
    triSelection(a , n);
    long long compteSelection = comparaisons ;
    comparaisons = 0 ;
    triRapide(b , 0 , n-1) ;
    long long compteRapide = comparaisons ;
    std::cout<<n <<" : rapide=" <<compteRapide<<" "
             <<"selection=" <<compteSelection <<"\n" ;
            
       delete[] a ;
       delete[] b ;     
 }
 return 0 ;
}