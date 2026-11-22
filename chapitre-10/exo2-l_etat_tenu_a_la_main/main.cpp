#include <iostream>
#include <string>
#include <set>
std::set<std::string> touches ;
int oublis = 0 ;
int n ;
   
int main(){
    std::cin>> n ;
    std::string event ;
    for(int i = 0 ;i< n ; i++){
        std::cin >> event ;
        if(event == "BAS"){
            std::string touche ;
            std::cin>> touche ;
            touches.insert(touche);
        } else if ( event == "HAUT"){
            std::string touche ;
            std::cin>> touche ;
            touches.erase(touche); 
        } else if( event == "QUESTION") {
           std::string touche ;
          std::cin>> touche ;
         if( touches.count(touche) ) {
             std::cout<<"oui\n";
            } else {
                 std::cout<<"non\n";
         
           } 
         
        } else if( event == "FOCUS_PERDU") {
            oublis += touches.size();
            touches.clear (); 
        }
       
    }
    std::cout<<"ENFONCEES "<< touches.size()<<"\n";
    std::cout<<"OUBLIS "<< oublis <<"\n";
    
    return 0 ;
}
