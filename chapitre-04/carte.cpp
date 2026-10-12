#include <iostream>
#include<fstream>
#include<string>

char tuile(  const char carte[] , int largeur , int x , int y  ) {
    
    return carte [y*largeur + x ];
}
int compter(const char carte[] , int largeur , int hauteur, char quoi){
    int cmp= 0 ;
    for( int y=0 ; y<hauteur ; y++){
        for(int x=0 ; x<largeur ; x++){
            if(tuile(carte , largeur , x , y)== quoi){
                cmp=cmp+1 ;
            }
        }
    }
    return cmp ;
}
 int main (){
    std::ifstream fichier ("carte.txt") ;

    if(!fichier) { 
    std::cerr<<" carte.txt introuvable"<<"\n" ;
    return 1 ;
 }

 int largeur , hauteur ;
 fichier >> largeur >> hauteur ;
 char carte[1000];
 std:: string ligne ;
 for(int y=0 ; y< hauteur ; y++){
    fichier >> ligne ;
    for(int x=0 ; x< largeur ; x++){
        carte[y * largeur + x] = ligne[x] ;
    }
 }
 fichier.close() ;
 for(int y = 0 ; y< hauteur ;y++){
    for(int x =0 ; x< largeur ; x++){
        std::cout << tuile(carte , largeur , x , y) ;
    }
    std::cout<<"\n" ;
 }
 std::cout<<". : " <<compter (carte , largeur , hauteur , '.')<<"\n" ;
 std::cout<<"# : " <<compter (carte , largeur , hauteur , '#')<<"\n" ;
  std::cout<<"~: " <<compter (carte , largeur , hauteur , '~')<<"\n" ;
   std::cout<< tuile( carte , largeur , 3 , 2)<<"\n";
   return 0 ;
    }