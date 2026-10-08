#include<iostream>
void transposer(const int source[] , int lignes , int colonnes , int destination[]);

void transposer(const int source[] , int lignes , int colonnes , int destination[]){
for(int y=0 ; y< lignes ; y++){
    for(int x=0 ; x< colonnes ; x++){
        destination[x* lignes + y]= source[y*colonnes +x];
    }
}
}

int main(){
    int colonnes , lignes ;

    std::cin>> lignes>> colonnes ;
    static int source[10000];
    static int destination[10000];
    for(int i=0 ; i<lignes * colonnes ; i++){
        std::cin>> source[i];
    }
    transposer(source , lignes , colonnes , destination);
    for(int y=0 ; y< colonnes ; y++){
    for(int x=0 ; x< lignes; x++){
        if(x>0){
            std::cout << ' ';
        }
        std::cout<< destination[y *lignes + x];
    }
    std::cout<< '\n';
       }
       return 0 ;
       
 }    
       
