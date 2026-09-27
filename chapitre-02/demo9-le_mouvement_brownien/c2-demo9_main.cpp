#include <cstdio>
#include <cstdlib>
#include <ctime>
 int main(){
    srand(time(nullptr)) ;
    int grille [21][21] ;
    for(int i=0 ; i<21 ; i++){
        for(int j=0 ; j<21 ; j++){
            grille[i][j]=0 ;  
        }
    }
    int x = 10 , y=10 ;
    grille[x][y]=1 ;
    for(int tour = 0 ; tour<200 ; tour++){
        int direction= rand() %4 ;
        switch(direction){
            case 0 : if (y>0) y-- ; break ; 
            case 1 : if (y<20) y++ ; break ;
            case 2 : if (x>0) x-- ; break ;
            case 3 : if (x<20) x++ ; break ;
        }
        grille[x][y]=1 ;
    }
    int cd=0 ;
    for(int i=0 ; i<21 ; i++){
        for(int j=0 ; j<21 ; j++){
            if(i==y && j==x){
                printf("#") ;
            }else if(grille[i][j]==1){
                printf(".");
                cd++ ;
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    cd++;
    printf("\n cases distinctes visitees :%d\n",cd);
    return 0 ;
 }
