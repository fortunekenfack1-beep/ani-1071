#include<chrono>
#include<cstdio>

double maintenant(){
    using namespace std::chrono ;
    auto t=steady_clock::now().time_since_epoch();
    return duration<double>(t).count();         //en secondes
}

int main(){
    long long total=0;
    double debut = maintenant();
    for(int i=1 ; i<=1000000 ; i++){
        total+=i ;
    }
    double fin = maintenant();
    double duree = fin-debut ;
    printf("Total = %lld\n" , total);
    printf("duree boucle = %f s\n" , duree);

    double durees[5];
    for(int k = 0 ; k<5 ; k++){
        double d= maintenant();
        printf("ligne courte\n");
        double f = maintenant();
        durees[k] = f - d ;
    }
    for(int k =0 ; k<5 ; k++){
        printf("printf %d : %f s\n" , k+1 , durees[k]);
    }

    return 0 ;

}
