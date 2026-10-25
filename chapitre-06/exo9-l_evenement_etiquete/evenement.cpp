#include <cstdio>
#include <cstring>

enum class TypeEvenement : unsigned char
    { Touche, Souris, Redimension };

struct Evenement
{
    TypeEvenement type;               
    union
    {
        struct { char code; bool pressee; }  touche;
        struct { int x, y; int bouton; }     souris;
        struct { int largeur, hauteur; }     redimension;
    };
};


struct File
{
    Evenement elements[100];
    int tete = 0;      // d'où l'on sort
    int queue = 0;     // où l'on entre
    int nombre = 0;
};

void enfiler(File& f, Evenement e)
{
    if (f.nombre == 100) return;
    f.elements[f.queue] = e;
    f.queue = (f.queue + 1) % 100;
    f.nombre++;
}


bool defiler(File& f, Evenement& e)
{
    if (f.nombre == 0) return false;
    e = f.elements[f.tete];
    f.tete = (f.tete + 1) % 100;
    f.nombre--;
    return true;
}


Evenement faireTouche(char code, bool pressee)
{
    Evenement e;
    memset(&e, 0, sizeof(e));
    e.type = TypeEvenement::Touche;
    e.touche.code = code;
    e.touche.pressee = pressee;
    return e;
}

Evenement faireSouris(int x, int y, int bouton)
{
    Evenement e;
    memset(&e, 0, sizeof(e));
    e.type = TypeEvenement::Souris;
    e.souris.x = x;
    e.souris.y = y;
    e.souris.bouton = bouton;
    return e;
}

Evenement faireRedim(int largeur, int hauteur)
{
    Evenement e;
    memset(&e, 0, sizeof(e));
    e.type = TypeEvenement::Redimension;
    e.redimension.largeur = largeur;
    e.redimension.hauteur = hauteur;
    return e;
}

void simulerClavier(File& f)
{
    enfiler(f, faireTouche('a', true));
    enfiler(f, faireSouris(100, 50, 1));
    enfiler(f, faireRedim(800, 600));
    enfiler(f, faireTouche('a', false));
    enfiler(f, faireSouris(120, 60, 0));
    enfiler(f, faireTouche('Z', true));
    enfiler(f, faireRedim(1024, 768));
    enfiler(f, faireSouris(300, 200, 2));
    enfiler(f, faireTouche('Z', false));
    enfiler(f, faireSouris(310, 210, 0));
}

void traiter(Evenement e)
{
    switch (e.type)
    {
    case TypeEvenement::Touche:
        printf("Touche : code=%c pressee=%d\n", e.touche.code, e.touche.pressee);
        break;
    case TypeEvenement::Souris:
        printf("Souris : x=%d y=%d bouton=%d\n",
               e.souris.x, e.souris.y, e.souris.bouton);
        break;
    case TypeEvenement::Redimension:
        printf("Redimension : %d x %d\n",
               e.redimension.largeur, e.redimension.hauteur);
        break;
    }
}

int main()
{
    
    File f;
    simulerClavier(f);
    Evenement ev;
    while (defiler(f, ev)) {
        traiter(ev);
    }

    
    Evenement e;
    printf("sizeof(Evenement) = %zu\n", sizeof(Evenement));
    printf("sizeof(e.touche) = %zu\n", sizeof(e.touche));
    printf("sizeof(e.souris) = %zu\n", sizeof(e.souris));
    printf("sizeof(e.redimension) = %zu\n", sizeof(e.redimension));

    
    Evenement t = faireTouche('A', true);
    printf("souris.x lu = %d (decimal), %x (hexa)\n",
           t.souris.x, (unsigned)t.souris.x);

    return 0;
}
