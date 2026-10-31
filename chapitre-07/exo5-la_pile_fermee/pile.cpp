#include<cstdio>
class Pile
{
private:
    static const int CAPACITE = 100;     
    int elements[CAPACITE];
    int nombre;                          

public:
    Pile() : nombre(0) {}

    void empiler(int v) { if (nombre < CAPACITE) elements[nombre++] = v; }
    int  depiler()      { return (nombre > 0) ? elements[--nombre] : -1; }
    int  sommet() const { return (nombre > 0) ? elements[nombre - 1] : -1; }
    bool vide() const   { return nombre == 0; }
    int  taille() const { return nombre; }
    bool pleine() const { return nombre == CAPACITE; }
};

class File
{
private:
    static const int CAPACITE = 100;
    int elements[CAPACITE];
    int tete;                            
    int queue;                          
    int nombre;
   
public:
    File() : tete(0), queue(0), nombre(0) {}

    void enfiler(int v)
    {
        if (nombre == CAPACITE) return;
        elements[queue] = v;
        queue = (queue + 1) % CAPACITE;  
        nombre++;
    }
    int defiler()
    {
        if (nombre == 0) return -1;
        int v = elements[tete];
        tete = (tete + 1) % CAPACITE;
        nombre--;
        return v;
    }
    int  taille() const { return nombre; }
    bool vide() const   { return nombre == 0; }
    bool pleine() const { return nombre == CAPACITE; }
};

int main()
{
    Pile p;
    File f;
     //p.nombre = -5;
     //f.tete = 7;

   
   
    for (int i = 0; i < 150; i++) p.empiler(i);
    printf("Pile apres 150 empiler : taille = %d, pleine = %d\n", p.taille(), p.pleine());
    for (int i = 0; i < 200; i++) p.depiler();
    printf("Pile apres 200 depiler : taille = %d, vide = %d\n", p.taille(), p.vide());

    
    for (int i = 0; i < 150; i++) f.enfiler(i);
    printf("File apres 150 enfiler : taille = %d, pleine = %d\n", f.taille(), f.pleine());
    for (int i = 0; i < 30; i++) f.defiler();
    printf("File apres 30 defiler : taille = %d\n", f.taille());
    for (int i = 0; i < 50; i++) f.enfiler(1000 + i);
    printf("File apres 50 enfiler de plus : taille = %d, pleine = %d\n", f.taille(), f.pleine());

    return 0;
}
