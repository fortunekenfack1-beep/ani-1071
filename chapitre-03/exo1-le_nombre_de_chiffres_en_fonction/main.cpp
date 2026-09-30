#include <iostream>
int nombreDechiffres(int a );

int nombreDechiffres(int a ){ 
    if (a<0){ a = -(unsigned long long )a ;} 
        return 1 ;   
    } 
     int cmpt =0 ;

     if (a<0){ a = -a ;} 
  while(a!=0){
    a = a/10 ;
   cmpt = cmpt +1 ;
 }
return cmpt ;
}
int main (){
    int a ;
     bool vide=true;
    
    while(std::cin>>a) {
std::cout<<nombreDechiffres(a)<<std::endl ;
vide= false ;
}
if(vide) {
    std::cout<<"AUCUN \n";
}
}
    


