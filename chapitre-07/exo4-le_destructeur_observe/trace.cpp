#include<cstdio>

class Trace 
{
    private:
    const char*  nom;
    public:
    Trace(const char* n ) : nom(n)
    {
        printf("%s nait\n" , nom);
    }
    ~Trace(){ printf("%s meurt\n" , nom);}
};
void fonction()
{
    Trace f("dans_fonction") ;
    printf("fin de la fonction\n");
   
}
int main(){
    Trace m("dans_main");
    fonction() ;
     {
        Trace b("dans_bloc");
        printf("fin du bloc 1\n");
    }

    Trace* p1 = new Trace("new_sans_delete");
    Trace* p2 = new Trace("new_avec_delete");
    delete p2;

    {
        Trace c1("bloc2_premiere");
        Trace c2("bloc2_seconde");
        printf("fin du bloc 2\n");
    }

    (void) p1;  

    printf("fin de main\n");

   
    return 0;
}

