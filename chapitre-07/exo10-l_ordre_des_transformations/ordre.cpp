#include <cstdio>
#include <cmath>
const double pi = 3.14159265358979323846;

struct Vec2 { double x, y; };

Vec2 operator+(Vec2 a, Vec2 b) { return {a.x + b.x, a.y + b.y}; }
Vec2 operator-(Vec2 a, Vec2 b) { return {a.x - b.x, a.y - b.y}; }

double dot(Vec2 a, Vec2 b) { return a.x * b.x + a.y * b.y; }
double longueur(Vec2 a) { return sqrt(dot(a, a)); }

Vec2 rotate(Vec2 a, double angle)
{
    double c = cos(angle), s = sin(angle);
    return {a.x * c - a.y * s, a.x * s + a.y * c};
}

struct Transform
{
    Vec2   position {0.0, 0.0};
    double rotation  = 0.0;          
    Vec2   echelle  {1.0, 1.0};

    
    Vec2 appliquer(Vec2 local, int ordre = 1) const
    {
        Vec2 p = local;
        if (ordre == 1)
        {
            p = {p.x * echelle.x, p.y * echelle.y};   
            p = rotate(p, rotation);                 
            p = p + position;                        
        }
        else if (ordre == 2)
        {
            p = rotate(p, rotation);                 
            p = {p.x * echelle.x, p.y * echelle.y};   
            p = p + position;                         
        }
        else
        {
            p = {p.x * echelle.x, p.y * echelle.y};   // 1. échelle
            p = p + position;                         // 2. translation
            p = rotate(p, rotation);                  // 3. rotation
        }
        return p;
    }
};

const int H = 20, L = 40;
char image[H][L];

void effacer(char c = ' ')
{
    for (int y = 0; y < H; y++)
        for (int x = 0; x < L; x++)
            image[y][x] = c;
}

void point(int x, int y, char c = '#')
{
    if (x < 0 || x >= L || y < 0 || y >= H) return;   
    image[y][x] = c;
}

void afficher()
{
    for (int y = 0; y < H; y++)
    {
        for (int x = 0; x < L; x++) printf("%c", image[y][x]);
        printf("\n");
    }
}

double lerp(double a, double b, double t)
{
    return a + (b - a) * t;
}

void segment(double x0, double y0, double x1, double y1, char c = '#')
{
    int pas = 60;
    for (int i = 0; i <= pas; i++)
    {
        double t = i / (double) pas;
        point((int) (lerp(x0, x1, t) + 0.5), (int) (lerp(y0, y1, t) + 0.5), c);
    }
}


const double COL_PAR_UNITE = 3.0;
const double LIGNE_PAR_UNITE = 1.5;

double colonne(double x) { return x * COL_PAR_UNITE; }
double ligne(double y)   { return (H - 1) - y * LIGNE_PAR_UNITE; }   
void dessiner(Vec2 c[4])
{
    effacer();
    for (int i = 0; i < 4; i++)
    {
        int j = (i + 1) % 4;
        segment(colonne(c[i].x), ligne(c[i].y), colonne(c[j].x), ligne(c[j].y));
    }
    afficher();
}

int main()
{
    Vec2 coins[4] = {{-0.5, -0.5}, {0.5, -0.5}, {0.5, 0.5}, {-0.5, 0.5}};

    Transform t;
    t.echelle = {2.0, 1.0};
    t.rotation = 45.0 * pi / 180.0;
    t.position = {10.0, 5.0};

    const char* noms[3] = {
        "ordre 1 : echelle, rotation, translation",
        "ordre 2 : rotation, echelle, translation",
        "ordre 3 : echelle, translation, rotation"};

    Vec2 res[3][4];
    for (int o = 0; o < 3; o++)
        for (int i = 0; i < 4; i++)
            res[o][i] = t.appliquer(coins[i], o + 1);

    printf("Points :\n");
    for (int o = 0; o < 3; o++)
    {
        printf("%s :", noms[o]);
        for (int i = 0; i < 4; i++) printf(" (%.3f, %.3f)", res[o][i].x, res[o][i].y);
        printf("\n");
    }

    printf("\nCotes et angles :\n");
    for (int o = 0; o < 3; o++)
    {
        printf("%s : cotes", noms[o]);
        for (int i = 0; i < 4; i++)
            printf(" %.3f", longueur(res[o][(i + 1) % 4] - res[o][i]));
    
        Vec2 u = res[o][1] - res[o][0];
        Vec2 v = res[o][3] - res[o][0];
        double angle = acos(dot(u, v) / (longueur(u) * longueur(v))) * 180.0 / pi;
        printf(", angle au premier coin %.2f degres\n", angle);
    }

    printf("\nDessins : %.1f colonnes et %.1f lignes par unite\n", COL_PAR_UNITE, LIGNE_PAR_UNITE);
    for (int o = 0; o < 3; o++)
    {
        printf("\n%s\n", noms[o]);
        dessiner(res[o]);
    }
    return 0;
}
