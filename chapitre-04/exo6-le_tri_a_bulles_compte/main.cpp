#include<iostream>
long long trierparBulles( int t[] , int n);

long long trierparBulles( int t[] , int n){
    long long echanges= 0;
    for(int passe = 0 ; passe< n-1 ; passe++){
        for(int i =0 ; i<n-1-passe ; i++){
            if(t[i]>t[i+1]) {
                int temp = t[i];
                t[i]=t[i+1];
                t[i+1]= temp;
                echanges++ ;
            }
        }
    }
    return echanges ;
}

int main(){
    int n ;
    std::cin>> n ;
    static int t[1000];
    for ( int i=0 ; i<n ; i++){
        std::cin>> t[i] ;
    }
    long long echanges = trierparBulles(t , n );
    for(int i=0 ; i<n ; i++){
        std::cout<< t[i] <<'\n';
    }
    std:: cout <<echanges <<'\n' ;
    return 0 ;
}
