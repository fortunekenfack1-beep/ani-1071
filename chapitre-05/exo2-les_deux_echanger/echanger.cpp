#include<iostream>
void echanger(int* a , int* b );
void echanger(int  &a , int  &b );
void echangerDouble(double& a , double& b);
void echangerChar(char& a , char& b);

void echangerChar(char& a , char& b){
    char  tmp = a ;
    a = b ;
    b = tmp ;
}
void echangerDouble(double& a , double& b){
    float  tmp = a ;
    a = b ;
    b = tmp ;
    
}
void echanger(int* a , int* b ){
    int  tmp = *a;
    *a = *b ;
    *b = tmp;

}
void echanger(int& a , int& b ){
    int tmp = a ;
    a = b ;
    b = tmp ;
    
}
int main(){
   
    int x = 1 , y= 2 ;
    double t = 5.1 , s = 4.2 ;
    char u ='A' , f = 'B' ;
    echanger(&x , &y) ;
    std::cout<<"x = "<< x <<" "<<"y = "<< y <<"\n" ;
    echanger(x , y ) ;
    std::cout<<"x = "<< x <<" "<<"y = "<< y <<"\n" ;
    echangerDouble( t , s) ;
     std::cout<<"t = "<< t <<" "<<"s = "<< s <<"\n" ;
     echangerChar( u , f ) ;
      std::cout<<"u = "<< u <<" "<<"f = "<< f <<"\n" ;
    return 0 ;

}

