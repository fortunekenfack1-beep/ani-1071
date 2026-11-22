#include <iostream>
#include <vector>
#include <string>
#include <set>
std::vector<std::string> nom ;
std::vector<std::string> types;
std::vector<std::string> toucheA ;
std::vector<std::string> toucheB;
int k ;
int act = 0 ;
int ax_nn = 0 ;
int nb ;
int main(){
    std::string n , t ;
    std::cin>> nb ;
    for(int i = 0 ; i < nb ; i++){ 
   std::cin >> n>> t  ;
   std::string a , b ;
   if(t == "ACTION"){
       std::cin>> a ;   
   }else {
       std::cin>> a >> b ;
   } 
   nom.push_back(n);
   types.push_back(t);
   toucheA.push_back(a);
   toucheB.push_back(b);
      }
      int n1 ;
      std::cin>> n1 ;
      for(int i = 0 ; i< n1 ; i++){
          int m ;
          std::cin >> m ;
          std::set<std::string> enfoncees;
          for( int j = 0 ; j< m ; j++){
              std::string s ;
              std::cin>> s ;
              enfoncees.insert(s);
          }
          std::cout<<"image "<<i+1 <<"\n";
          for(int k = 0 ; k< nb ; k++){
              int valeur ;
              if(types[k] == "ACTION"){
                  valeur = enfoncees.count(toucheA[k]) ? 1 : 0 ;
                  if(valeur == 1) act++;
              }else{
                  int negatif = enfoncees.count(toucheA[k]) ? 1 : 0 ;
                  int positif = enfoncees.count(toucheB[k]) ? 1 : 0 ;
                  valeur = positif - negatif ;
                  if(valeur !=0) ax_nn++;
              }
              std::cout<< nom[k]<<" "<<valeur<<"\n";
          }
      }
      std::cout<<"ACTIVATIONS "<<act<<"\n";
      std::cout<<"AXES NON NULS "<<ax_nn<<"\n";
      return 0 ;
}














