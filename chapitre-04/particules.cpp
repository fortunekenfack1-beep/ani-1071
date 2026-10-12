#include<iostream>
#include<chrono>
const int NB_PARTICULES = 10000;
const int NB_REPETITIONS = 1000 ;

struct particule {
    float x , y ;
    float vx , vy ;
    int vie ;
    int couleur ; 
} ;
particule tab_struct[NB_PARTICULES] ;
float x_p[NB_PARTICULES] ;
float y_p[NB_PARTICULES] ;
float vx_p[NB_PARTICULES] ;
float vy_p[NB_PARTICULES] ;
int vie_p[NB_PARTICULES] ;
int couleur_p[NB_PARTICULES] ;

void initialiser(){
    for(int i=0 ; i<NB_PARTICULES ; i++){
        float x= (float) i ;
        float y= (float)(i % 100) ;
        float vx = 0.5f ;
        float vy = 0.25f ;
        int vie = 5000 ;
        int couleur = i % 256 ;

        tab_struct[i].x = x ;
        tab_struct[i].y = y;
         tab_struct[i].vx = vx ;
        tab_struct[i].vy = vy ;
         tab_struct[i].vie = vie ;
        tab_struct[i].couleur = couleur ;

        x_p[i] = x ;
        y_p[i] = y;
         vx_p[i] = vx ;
        vy_p[i] = vy ;
          vie_p[i] = vie ;
           couleur_p[i] = couleur ;


    }
}

void structures_position(){
    for(int r=0 ;r< NB_REPETITIONS ; r++){
        for(int i=0 ; i< NB_PARTICULES ; i++){
            tab_struct[i].x += tab_struct[i].vx ;
             tab_struct[i].y += tab_struct[i].vy ;
        }
    }
}

void structures_vie(){
    for(int r=0 ;r< NB_REPETITIONS ; r++){
        for(int i=0 ; i< NB_PARTICULES ; i++){
             tab_struct[i].vie -= 1 ;
        }
    }
}

void paralleles_position(){
    for(int r=0 ;r< NB_REPETITIONS ; r++){
        for(int i=0 ; i< NB_PARTICULES ; i++){
            x_p[i] += vx_p[i] ;
             y_p[i] += vy_p[i] ;
        }
    }
}

void paralleles_vie(){
    for(int r=0 ;r< NB_REPETITIONS ; r++){
        for(int i=0 ; i< NB_PARTICULES ; i++){
            vie_p[i] -= 1 ;
            
        }
    }
}


long long mesurer (void(*boucle)()) {
    auto debut = std::chrono::steady_clock:: now () ;
    boucle() ;
    auto fin = std::chrono::steady_clock:: now () ;
    return std::chrono:: duration_cast< std::chrono:: microseconds>(fin - debut) .count () ;

}

int main(){
    const char* noms[4] = {
        "structures, position",
         "structures, vie",
          "paralleles, position",
          "paralleles, vie"
    } ;
    void (*boucles[4])() = {
        structures_position,
         structures_vie,
          paralleles_position,
          paralleles_vie  } ;
    for(int c= 0 ; c<4 ; c++){
        for (int essai =1 ; essai<= 3 ; essai++){
            initialiser() ;
            long long duree = mesurer(boucles[c]);
            std::cout<<noms[c] <<", essai "<< essai <<" : " <<duree<<" us\n";
        }
    }
    initialiser ();
    structures_position();
    structures_vie();
    paralleles_position();
    paralleles_vie();
    std::cerr<< " x structures : "<<tab_struct[NB_PARTICULES - 1].x
             <<" |x paralleles :  "<< x_p[NB_PARTICULES -1 ]<< "\n";
              std::cerr<< " y structures : "<<tab_struct[NB_PARTICULES - 1].y
             <<" |y paralleles :  "<< y_p[NB_PARTICULES -1 ]<< "\n";
              std::cerr<< " vie structures : "<<tab_struct[0].vie
             <<" |vie paralleles :  "<< vie_p[0] << "\n";
             return 0 ;
}




