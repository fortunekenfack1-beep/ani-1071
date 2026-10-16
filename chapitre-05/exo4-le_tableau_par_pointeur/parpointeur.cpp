#include<iostream>
#include<cstring>
int somme(const int* t , int n);
int maximum( const int* t , int n) ;
void inverser( int* t , int n ) ;
int longueur (const char* s);

int somme(const int* t , int n){
   int Som= 0 ;
  const int* p = t ;
  const int* fin = t+n ;
    while(p< fin){
        Som+= *p ; 
        p++ ;
    }
    
    return Som ;
}

int maximum( const int* t , int n) {
    int Max = *t ;
   const int* p = t+1 ;
   const int* fin = t+n ;
while (p < fin){
    if(*p > Max) Max = *p ;
    p++ ;
   
    }
    return Max ;
}

void inverser( int* t , int n ) {
    int* debut= t ;
    int* fin = t+n-1 ;
   while(debut < fin ){
    int tmp = *debut ;
    *debut = *fin ;
    *fin = tmp ;
    debut++ ;
    fin-- ;
   }
}

int longueur (const char* s){
   const char* p = s ;
    while( *p != '\0'){ 
    p++ ; 
}
return static_cast<int>( p - s) ;
}

int main (){
    const char* s = "bonjour" ;
        const char* k = "Yaoundé" ;
    int t[]={ 12 , 7 , 19 , 3 , 15} ;
   std::cout<<"somme = "<< somme(t , 5)<<"\n" ;
    std::cout<<"maximum = "<<maximum( t , 5)<<"\n" ;
    int u[]={1 , 2 , 3 , 4 , 5};
    std::cout<<" avant:\n" ;
     for(int i=0 ; i<5 ; i++){
        std::cout<<" "<<u[i] ;
    
      }
       std::cout<<"\n";
    inverser(u , 5);
    std::cout<<" apres:\n" ;
    for(int i=0 ; i<5 ; i++){
        std::cout<<"  "<< u[i] ;
   
    }
     std::cout<<"\n";
 std::cout<<"longueur bonjour= "<< longueur(s)
          <<" , strlen = "<<std:: strlen(s) <<"\n"  ;
 std::cout<<"longueur Yaounde= "<< longueur(k)
          <<" , strlen = "<<std:: strlen(k) <<"\n"  ;

  return 0 ;
}
