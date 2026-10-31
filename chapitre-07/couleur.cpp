#include <cstdio>

unsigned char sature(double v)
{
    if(v<=0.0) return 0 ;
    if(v>=255.0) return 255 ;
    return(unsigned char) (v+ 0.5);
}
struct Couleur {
    unsigned char r , g , b , a ;
  Couleur() : r(0), g(0), b(0), a(255) {}

    Couleur(unsigned char r_, unsigned char g_, unsigned char b_, unsigned char a_ = 255)
        : r(r_), g(g_), b(b_), a(a_) {}

    explicit Couleur(unsigned int rgba)
        : r((rgba >> 24) & 0xFF), g((rgba >> 16) & 0xFF),
          b((rgba >> 8) & 0xFF),  a(rgba & 0xFF) {}

    unsigned int empaqueter() const
    {
        return ((unsigned int) r << 24) | ((unsigned int) g << 16)
             | ((unsigned int) b << 8)  |  (unsigned int) a;
    }
};

Couleur operator*(Couleur c, double k)
{
    return Couleur(sature(c.r * k), sature(c.g * k), sature(c.b * k), c.a);
}

Couleur operator+(Couleur c, Couleur d)
{
    return Couleur(sature(c.r + d.r), sature(c.g + d.g), sature(c.b + d.b), sature(c.a + d.a));
}

double lerp(double a, double b, double t)
{
    return a + (b - a) * t;
}

Couleur lerp(Couleur c, Couleur d, double t)
{
    return Couleur(sature(lerp(c.r, d.r, t)), sature(lerp(c.g, d.g, t)),
                   sature(lerp(c.b, d.b, t)), sature(lerp(c.a, d.a, t)));
}

void montrer(const char* texte, Couleur c)
{
    printf("%s = (r=%d, g=%d, b=%d, a=%d)\n", texte, c.r, c.g, c.b, c.a);
}

int main()
{
    printf("Sans saturer :\n");
    unsigned char x = 200 + 200;
    printf("unsigned char x = 200 + 200 -> %d\n", x);

    printf("\nEssais :\n");
    Couleur c = {200, 100, 50, 255};
    Couleur d(100, 200, 250, 128);
    montrer("c", c);
    montrer("d", d);
    montrer("c * 0.5", c * 0.5);
    montrer("c * 2.0", c * 2.0);              
    montrer("c + d", c + d);                  
    montrer("lerp(c, d, 0)", lerp(c, d, 0.0));
    montrer("lerp(c, d, 0.5)", lerp(c, d, 0.5));
    montrer("lerp(c, d, 1)", lerp(c, d, 1.0));

    printf("\nEmpaquetage :\n");
    Couleur essais[] = {Couleur(255, 128, 0, 255), Couleur(0, 0, 255, 128),
                        Couleur(200, 100, 50, 255), Couleur(1, 2, 3, 4), Couleur(0, 0, 0, 0)};
    for (Couleur e : essais)
    {
        unsigned int n = e.empaqueter();
        Couleur retour(n);
        bool ok = retour.r == e.r && retour.g == e.g && retour.b == e.b && retour.a == e.a;
        printf("(%d, %d, %d, %d) -> %08X -> (%d, %d, %d, %d) : %s\n",
               e.r, e.g, e.b, e.a, n, retour.r, retour.g, retour.b, retour.a, ok ? "ok" : "ERREUR");
    }
    printf("0x12345678 -> r=%02X g=%02X b=%02X a=%02X\n",
           Couleur(0x12345678u).r, Couleur(0x12345678u).g, Couleur(0x12345678u).b, Couleur(0x12345678u).a);
    return 0;
}
