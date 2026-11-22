#include<iostream>
bool avant = false ;
bool maintenant = false ;
int cmp_app = 0 , cm_rlc = 0 ;
int n  , valeur;
int main(){
    std::cin>> n ;
    for(int i = 1 ; i <= n ; i++){
        std::cin>>valeur ;
        if( valeur == 1){
            maintenant = true ;
        } else {
            maintenant = false ;
        }
        if( maintenant == true && avant == false){
            std::cout<< i <<" "<<"APPUYE\n";
            cmp_app += 1 ;
        }else if(maintenant== true && avant== true){
            std::cout<<i<<" "<<"MAINTENU\n";
            
        } else if( maintenant == false && avant == true) {
            std::cout<<i<<" "<<"RELACHE\n";
            cm_rlc += 1 ;
        } else {
            std::cout<<i<<" "<<"RIEN\n";
        }
        avant = maintenant ;
    }
    std::cout<<" APPUIS "<<cmp_app<<"\n";
    std::cout<< "RELACHES "<<cm_rlc<<"\n";
    return 0 ;
      }
      
      
      
      
      
      
      
        
