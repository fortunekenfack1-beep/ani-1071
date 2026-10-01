 #include <iostream>
 long long fibonacci(int n , long long& appels);

  long long fibonacci(int n , long long& appels){
    appels++ ;
    if(n<=1) return n ;
    return fibonacci(n-1 , appels) + fibonacci(n- 2, appels);
  }
  int main(){
    int n ;
    std::cin>>n ;
    long long appels=0 ;
    long long r = fibonacci(n, appels);
std::cout<<r <<"\n" ;
std::cout<<appels <<"\n";
return 0 ;
 }