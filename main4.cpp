#include <iostream>
#include<cstdlib>
int n ;
int position = 0 ;
int dpm ;
int pas ;
int immobile = 0 ;
int main() {
    std:: cin >> pas ;
    std::cin>> n ;
    for(int i = 0 ; i< n ; i++){
        int gauche , droite ;
        std::cin>> gauche ;
        std::cin>> droite ;
        int axe = droite - gauche ;
        int mouvement = axe * pas ;
        position += mouvement ;
        dpm += abs(mouvement);
        if(axe == 0 ){
            immobile += 1 ;
        }
        std::cout<< axe<<" " <<position <<" \n";
    }
    std::cout<<"DEPLACEMENT"<< " "<< dpm <<"\n";
    std::cout<<"IMMOBILE"<<" "<< immobile <<"\n";
    return 0 ;
}





