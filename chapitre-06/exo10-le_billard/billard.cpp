#include <cstdio>
#include <cmath>

const double pi = 3.14159265358979;

struct Vec2
{
    double x;
    double y;
};

Vec2 add(Vec2 a, Vec2 b) { return {a.x + b.x, a.y + b.y}; }
Vec2 sub(Vec2 a, Vec2 b) { return {a.x - b.x, a.y - b.y}; }
Vec2 scale(Vec2 a, double k) { return {a.x * k, a.y * k}; }
double dot(Vec2 a, Vec2 b) { return a.x * b.x + a.y * b.y; }
double length(Vec2 a) { return sqrt(dot(a, a)); }

Vec2 normalize(Vec2 a) {
    double l = length(a);
    if (l == 0) return {0, 0};
    return scale(a, 1 / l);
}


bool cerclesSeTouchent(Vec2 c1, double r1, Vec2 c2, double r2) {
    Vec2 d = sub(c2, c1);
    return dot(d, d) < (r1 + r2) * (r1 + r2);
}


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

 
const double R = 1.5;       
const double dt = 0.01;     
const int MAXP = 1000;
Vec2 trajA[MAXP];
Vec2 trajB[MAXP];
int nbPas = 0;

void simuler(double decalage, bool afficherAngle) {
    Vec2 pA = {-15, decalage}, vA = {10, 0};   // bille lancée
    Vec2 pB = {0, 0},          vB = {0, 0};    // bille immobile
    bool choc = false;
    int pasChoc = 0;
    nbPas = 0;

    while (nbPas < MAXP) {
        pA = add(pA, scale(vA, dt));
        pB = add(pB, scale(vB, dt));
        trajA[nbPas] = pA;
        trajB[nbPas] = pB;
        nbPas++;

        if (!choc && cerclesSeTouchent(pA, R, pB, R)) {
            Vec2 d = sub(pB, pA);
            double dist = length(d);
            Vec2 n = normalize(d);                

           
            double chevauchement = 2 * R - dist;
            pA = sub(pA, scale(n, chevauchement / 2));
            pB = add(pB, scale(n, chevauchement / 2));
            trajA[nbPas - 1] = pA;
            trajB[nbPas - 1] = pB;

            
            double vnA = dot(vA, n);
            double vnB = dot(vB, n);
            vA = add(vA, scale(n, vnB - vnA));
            vB = add(vB, scale(n, vnA - vnB));

            choc = true;
            pasChoc = nbPas;
        }
        if (choc && nbPas >= pasChoc + 150) break;  
    }

    if (!afficherAngle) return;

    if (!choc) {
