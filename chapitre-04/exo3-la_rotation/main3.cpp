#include<iostream>
void tourner(int t[] , int n , int k);

void tourner(int t[] , int n , int k){
    if (n<=0) return ;
    k %=n;
    if(k<0) k +=n ;
    int tmp[1000];
    for(int i=0 ; i<n ; i++){
            tmp[i]=t[(i +k)% n ];
    }
    for(int i=0 ; i<n ; i++){
t[i] = tmp[i];
    }
}
int main(){
    int t[1000];
    int n;
    int k ;
    std::cin>>n >> k ;
    for(int i =0 ; i<n ;i++){
        std::cin>>t[i];
    }
    tourner(t , n , k);
    for(int i=0 ; i<n; i++){
        std::cout<< t[i] <<"\n";

    }
    return 0 ;
}
