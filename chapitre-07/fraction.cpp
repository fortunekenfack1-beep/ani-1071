#include <cstdio>

int pgcd(int a , int b) {

 if(a<0) a = -a ;
    if(b<0) b = -b;
  while (b != 0)
    {
        int reste = a % b;
        a = b;
        b = reste;
    }
    return a;
}

class Fraction
{
private:
    int num, den;                     

public:
    Fraction(int n = 0, int d = 1)
    {
        if (d == 0)
        {
           
            printf("[erreur] denominateur nul : %d/0 remplace par 0/1\n", n);
            num = 0;
            den = 1;
            return;
        }
        int g = pgcd(n, d);          
        num = n / g;
        den = d / g;
        if (den < 0)                  
        {
            num = -num;
            den = -den;
        }
    }

    Fraction operator+(Fraction b) const { return Fraction(num * b.den + b.num * den, den * b.den); }
    Fraction operator-(Fraction b) const { return Fraction(num * b.den - b.num * den, den * b.den); }
    Fraction operator*(Fraction b) const { return Fraction(num * b.num, den * b.den); }
    Fraction operator/(Fraction b) const { return Fraction(num * b.den, den * b.num); }   
    bool operator==(Fraction b) const { return num == b.num && den == b.den; }

    void afficher() const { printf("%d/%d", num, den); }
};

void essai(const char* texte, Fraction f)
{
    printf("%s = ", texte);
    f.afficher();
    printf("\n");
}

int main()
{
    printf("pgcd(12, 18) = %d, pgcd(-12, 18) = %d, pgcd(0, 5) = %d, pgcd(7, 0) = %d\n\n",
           pgcd(12, 18), pgcd(-12, 18), pgcd(0, 5), pgcd(7, 0));

    printf("Essais :\n");
    essai("Fraction(1, 2) + Fraction(1, 3)", Fraction(1, 2) + Fraction(1, 3));
    essai("Fraction(1, 2) - Fraction(1, 3)", Fraction(1, 2) - Fraction(1, 3));
    essai("Fraction(2, 3) * Fraction(3, 4)", Fraction(2, 3) * Fraction(3, 4));
    essai("Fraction(1, 2) / Fraction(3, 4)", Fraction(1, 2) / Fraction(3, 4));
    essai("Fraction(1, 6) + Fraction(1, 3)", Fraction(1, 6) + Fraction(1, 3));     
    essai("Fraction(3, -6)", Fraction(3, -6));                                      
    essai("Fraction(-3, -6)", Fraction(-3, -6));
    essai("Fraction(0, 5)", Fraction(0, 5));

    printf("\nEgalites :\n");
    printf("Fraction(1, 2) == Fraction(2, 4) : %d\n", Fraction(1, 2) == Fraction(2, 4));
    printf("Fraction(1, 2) == Fraction(-1, -2) : %d\n", Fraction(1, 2) == Fraction(-1, -2));
    printf("Fraction(1, 2) == Fraction(1, 3) : %d\n", Fraction(1, 2) == Fraction(1, 3));

    printf("\nDenominateur nul :\n");
    essai("Fraction(1, 0)", Fraction(1, 0));
    essai("Fraction(1, 2) / Fraction(0, 1)", Fraction(1, 2) / Fraction(0, 1));

    return 0;
}
