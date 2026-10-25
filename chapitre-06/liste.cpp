#include <iostream>


struct Noeud
{
    int    valeur;
    Noeud* suivant;     
};

int vivants = 0;   

Noeud* ajouterEnTete(Noeud* tete, int v) {
    Noeud* n = new Noeud;
    vivants++;
    n->valeur = v;
    n->suivant = tete;
    return n;
}

Noeud* ajouterEnQueue(Noeud* tete, int v) {
    Noeud* n = new Noeud;
    vivants++;
    n->valeur = v;
    n->suivant = nullptr;
    if (tete == nullptr) {
        return n;                   
    }
    Noeud* p = tete;
    while (p->suivant != nullptr) {
        p = p->suivant;           
    }
    p->suivant = n;
    return tete;
}

int compter(const Noeud* n) {
    int c = 0;
    while (n != nullptr) {
        c++;
        n = n->suivant;
    }
    return c;
}

bool contient(const Noeud* n, int v) {
    while (n != nullptr) {
        if (n->valeur == v) return true;
        n = n->suivant;
    }
    return false;
}

void afficher(const Noeud* n) {
    if (n == nullptr) {
        std::cout << "(vide)";
    }
    while (n != nullptr) {
        std::cout << n->valeur;
        if (n->suivant != nullptr) 
        std::cout << " -> ";
        n = n->suivant;
    }
   std::cout << "\n";
}

Noeud* retirer(Noeud* tete, int v) {
    if (tete == nullptr) {
        return nullptr;
    }
    if (tete->valeur == v) {            
        Noeud* reste = tete->suivant;    
        delete tete;
        vivants--;
        return reste;
    }
    Noeud* precedent = tete;
    Noeud* courant = tete->suivant;
    while (courant != nullptr) {
        if (courant->valeur == v) {      
            precedent->suivant = courant->suivant;
            delete courant;
            vivants--;
            return tete;
        }
        precedent = courant;
        courant = courant->suivant;
    }
    return tete;                         
}

void liberer(Noeud* n) {
    while (n != nullptr) {
        Noeud* reste = n->suivant;       
        delete n;
        vivants--;
        n = reste;
    }
}

Noeud* inverser(Noeud* tete) {           
    Noeud* precedent = nullptr;
    Noeud* courant = tete;
    while (courant != nullptr) {
        Noeud* suivant = courant->suivant;
        courant->suivant = precedent;
        precedent = courant;
        courant = suivant;
    }
    return precedent;                    
}

int main() {
    std::cout << std::boolalpha;
    Noeud* liste = nullptr;

    liste = ajouterEnQueue(liste, 10);
    std::cout << "ajouterEnQueue 10 sur liste vide : "; afficher(liste);
    liste = ajouterEnQueue(liste, 20);
    std::cout << "ajouterEnQueue 20 : "; afficher(liste);
    liste = ajouterEnQueue(liste, 30);
    std::cout << "ajouterEnQueue 30 : "; afficher(liste);
    liste = ajouterEnTete(liste, 5);
    std::cout << "ajouterEnTete 5 : "; afficher(liste);
    liste = ajouterEnQueue(liste, 40);
    std::cout << "ajouterEnQueue 40 : "; afficher(liste);

    std::cout << "compter = " << compter(liste) << "\n";
    std::cout << "contient(20) = " << contient(liste, 20) << "\n";
    std::cout << "contient(99) = " << contient(liste, 99) << "\n";

    liste = retirer(liste, 5);
    std::cout << "retirer 5 (tete) : "; afficher(liste);
    liste = retirer(liste, 30);
    std::cout << "retirer 30 (milieu) : "; afficher(liste);
    liste = retirer(liste, 99);
    std::cout << "retirer 99 (absent) : "; afficher(liste);

    liste = inverser(liste);
   std:: cout << "inverser : "; afficher(liste);

    std::cout << "vivants avant liberer = " << vivants << "\n";
    liberer(liste);
    liste = nullptr;
    std::cout << "vivants apres liberer = " << vivants << "\n";

   
    Noeud* vide = nullptr;
    vide = inverser(vide);
    std::cout << "inverser liste vide : "; afficher(vide);

    Noeud* seul = ajouterEnQueue(nullptr, 7);
    seul = inverser(seul);
    std::cout << "inverser liste 1 noeud : "; afficher(seul);
    seul = ajouterEnQueue(seul, 8);
    std::cout << "ajouterEnQueue 8 sur liste 1 noeud : "; afficher(seul);
    liberer(seul);
    std::cout << "vivants final = " << vivants << "\n";

    return 0;
}