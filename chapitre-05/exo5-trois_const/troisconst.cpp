#include<iostream>
int main(){ 
int x=1 ;
int y=2 ;
//const int* a = &x ;
int* const b = &x ;
//const int* const c = &x ;
//*a = 5 ;
//a= &y ;

*b = 5 ;
//b= &y ;
//*c = 5 ;
//c=&y ;

return 0 ;
 }

