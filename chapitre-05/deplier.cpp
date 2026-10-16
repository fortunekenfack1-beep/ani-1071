#include<iostream>
void deplier (int& x , int& y) ;
void minMax ( const int t[] , int n , int& min , int& max) ;
bool diviser(int a , int b , int& quotient , int& reste);

void deplier (int i , int largeur ,int& x , int& y) {
x = i % largeur ;
y = i / largeur ;

}
void minMax ( const int t[] , int n , int& min , int& max) {
    max = t[0] ;
    min = t[0];
    for(int i = 1 ; i<n-1 ; i++){
        if(t[i]> max){
            max = t[i] ;
        }else{
            min = t[i] ;
        }
    }
}
bool diviser(int a , int b , int& quotient , int& reste){
    if(b == 0) return false ;
    else{ 
    quotient = a/ b;
    reste = a % b ;
    return true ;
    }
}

int main(){
    int x=0 , y=0 ;
    int numeros[] = {0 , 39 , 40 , 85} ;
        int t[]={ 12 , 7 , 19 , 3 , 15} ; 
  


    for(int k = 0 ;k < 4 ; k++ ){
        deplier(numeros[k] , 40 , x , y);
          std::cout<<"deplier i= "<< numeros[k] <<" largeur= 40 -> x = "<<x <<", " <<"y = "<<y <<"\n" ;
    }
  int min = 0 , max = 0 ;
    minMax( t , 5 , min , max ) ;
    std::cout<<"minMax { 12 , 7 , 19 , 3 , 15} -> "<< "min = "<<min <<"  "<<"max = "<<max <<"\n";
int neg[]= {-4 , -9 , -1} ;
 minMax( neg , 3 , min , max ) ;
  std::cout<<"minMax {-4, -9 , -1} -> "<< "min = "<<min <<"  "<<"max = "<<max <<"\n";

   std:: cout << std:: boolalpha ;
    int quotient = 0 , reste= 0 ;
    bool ok = diviser(17 , 5 , quotient , reste);
    std::cout<<" diviser 17 5 -> rendu = " << ok<<"  " <<"quotient ="<<quotient<<"  " <<"reste = "<< reste <<"\n" ;
     ok = diviser(20 ,4  , quotient , reste);
      std::cout<<" diviser 20 4 -> rendu = " << ok<<"  " <<"quotient ="<<quotient<<"  " <<"reste = "<< reste <<"\n" ;
    quotient = -999 ;
    reste = -999;
    std::cout<<" avant : quotient= "<<quotient<<" reste = "<<reste<<"\n";
    ok = diviser (10 , 0 , quotient , reste ) ;
    std::cout <<"rendu= "<< ok <<"\n";
     std::cout<<" apres : quotient= "<<quotient<<" reste = "<<reste<<"\n";
     return 0 ;
}
