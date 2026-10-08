#include<iostream>

int longueur(const char s[]){
    int n=0 ;
    while(s[n] != '\0'){
        n++;
    }
    return n ;
}
bool estpalindrome(const char s[]){
     int n =  longueur (s);
   for(int i=0 ; i<n/2; i++){
    if(s[i] != s[n-1-i]){
        return false;
    }
       }
    return true ;

}
void renversertexte(char s[]){
   int n=longueur(s);
   for(int i=0; i< n/2 ;i++){
    char tmp = s[i];
    s[i]=s[n-1-i];
    s[n-1-i] = tmp;
   }
}

int main(){
    char s[201];
    std::cin>> s ;
    if(estpalindrome(s)){
        std::cout<<"oui\n";
    }else{
        std::cout<<"non\n";
    }
    renversertexte(s);
    std::cout<< s <<"\n";
    return 0 ;
}
