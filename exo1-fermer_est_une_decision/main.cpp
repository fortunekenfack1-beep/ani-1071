#include<iostream>
#include<string>
bool modifie = false ;
bool ferme = false ;
int cmp_demande = 0 ;
int cmp_ignore = 0 ;
int n ;
std::string event ;
int main(){
    std::cin>> n ;
    for(int i = 0 ; i< n ; i++) {
        std::cin>> event ; 
        if( ferme ){
            cmp_ignore += 1 ;
            continue ;
             } 
                 if( event == "MODIF"){
                     modifie = true ;
                         std::cout<< "modifie" <<"\n"; 
                 }else if ( event =="SAUVE"){
                     modifie = false ;
                     std::cout<<" enregistre"<<"\n";
                 } else if (event == "FERMETURE"){
                     cmp_demande += 1 ;
                     if(modifie){
                         std::cout<<"fermeture refusee"<<"\n";
                     }else {
                         std::cout<< " fermeture acceptee"<<"\n";
                         ferme = true ;
                     }
                 }
                 
             } 
              
             std::cout<< "DEMANDES "<< cmp_demande <<"\n";
             std::cout<< "IGNORES "<< cmp_ignore <<"\n";
             std::cout<< "FERMEE "<<(ferme ? "oui" : "non") <<"\n";
             return 0 ;
        
   
}
