#include <iostream>
int pas ;
int plafond ;
int n ;
long long seauAvec = 0 ;
long long seauSans = 0 ;
long long  totalAvec = 0 ;
long long totalSans = 0 ;
int plafonnages ;
int main(){
    std::cin>> pas  >> plafond   >> n ;
    for(int i = 1 ; i<= n ; i++){
        long long duree ;
        std::cin>> duree ;
        int dureeAvec = duree ;
        if(duree> plafond){
            dureeAvec = plafond ;
            plafonnages += 1 ;
        }
         seauAvec += dureeAvec ;
         seauSans += duree ;
         
        int pasAvec = 0 ;
        int pasSans = 0 ;
        while( pas > 0 && seauAvec >= pas){
            seauAvec -= pas ;
            pasAvec += 1 ;
        }
        while(  pas > 0 && seauSans >= pas){
                   seauSans -= pas ;
                   pasSans += 1 ;
               }
               totalAvec += pasAvec;
               totalSans += pasSans;
               std::cout<<i<<" "<<pasAvec<<" "<<pasSans<<"\n";
}
std::cout<< "AVEC "<<totalAvec<<"\n";
std::cout<< "SANS "<<totalSans <<"\n";
std::cout<< "PLAFONNAGES "<<plafonnages<<"\n";
std::cout<<"DETTE "<<seauSans<<"\n" ;
return 0 ;
}






