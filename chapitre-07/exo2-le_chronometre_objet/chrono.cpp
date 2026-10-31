#include <cstdio>
#include<chrono>
double maintenant ()
{
    using namespace std::chrono;
    auto t= steady_clock::now().time_since_epoch();
    return duration<double>(t).count();
}
class Chrono
{
    private:
    double depart ;
    public:
    Chrono() : depart(maintenant()){} 
    double ecoule() const {
        return maintenant() - depart; 
    }
    void redemarrer(){
        depart= maintenant();
    }
};
int main(){
     printf("Boucle :\n");
    for (int essai = 1; essai <= 3; essai++)
    {
        long long total = 0;
        Chrono c;
        for (long long i = 0; i < 100000000; i++) total += i;
        printf("essai %d : %.9f s\n", essai, c.ecoule());
        printf("total = %lld\n", total);
    }

   
    printf("\nLe plus court :\n");
    Chrono c;
    for (int i = 1; i <= 5; i++)
    {
        c.redemarrer();
        printf("duree %d : %.9f s\n", i, c.ecoule());
    }

    const Chrono k;
    printf("\nk.ecoule() = %.9f s\n", k.ecoule());  
    // k.redemarrer();                              

    return 0;
}

    
