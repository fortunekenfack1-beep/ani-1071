#include<iostream>
void renverser(int t[] , int n);

void renverser(int t[] , int n){
    int k=0 ;
    for(int i=0 ; i < n/2 ; i++ ){
k=t[i];
t[i]= t[n-1-i] ;
t[n-1-i]=k ;
    }
}
int main (){
   int t[1000] ;
    int n ;
 
std::cin>> n ;
for(int i=0 ;i<n ; i++){
    std::cin>> t[i];
 }
 renverser(t , n) ;
if(n==0){
    std::cout<<"AUCUN\n";
}else{ 
for(int i=0 ; i < n ; i++){
    std::cout<< t[i] <<" ";
}
}
return 0;

}
