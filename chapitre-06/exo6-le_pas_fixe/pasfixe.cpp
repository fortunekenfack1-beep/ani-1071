#include <chrono>
#include <cstdio>
#include <cstdlib>
long appels = 0 ;
double maintenant ()
{
    using namespace std::chrono ;
    auto t = steady_clock::now().time_since_epoch();
    return duration<double>(t).count();  //secondes
}
const double DUREE_MAX_ATTENTE = 0.001 ; //0.05


void mettreAjour(double dt){
    (void)dt ;
    appels+= 1 ;

}
void attendre(){
    double duree = DUREE_MAX_ATTENTE * (rand() / (double)RAND_MAX); 
    double debut = maintenant ();
    while(maintenant() - debut < duree){


    }
}
int main()  { 
const double PAS = 1.0/120.0 ;
double accumulateur = 0.0 ;
long tours = 0 ;
double debut = maintenant () ;
double precedent = debut ;
while(maintenant()- debut < 10.0 )
{
    double actuel = maintenant();
    accumulateur += actuel-precedent ;
    precedent = actuel ;
    while(accumulateur >= PAS){
        mettreAjour(PAS) ;
        accumulateur -= PAS ;
    }
    attendre() ;
    tours = tours + 1 ; 
}
    printf("duree Max d'une attente : %g s\n" , DUREE_MAX_ATTENTE );
    printf("tours : %ld\n" , tours );
    printf("Appels a mettreAjour : %ld\n " , appels) ;
    return 0 ; 
}
