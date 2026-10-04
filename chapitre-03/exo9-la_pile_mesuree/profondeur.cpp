#include <iostream>
 
void descendre(unsigned long profondeur);

void descendre(unsigned long profondeur) {
    int gros[1000];
    gros[0]=static_cast<int>(profondeur);
    gros[999]=gros[0]+1 ;
    std::cout <<"profondeur: " <<profondeur <<"\n" ;
    std::cout <<"gros[999]= " <<gros[999] <<")" <<"\n" ;
    descendre (profondeur + 1) ;
}
int main (){
    descendre(1) ;
    return 0 ;
}
