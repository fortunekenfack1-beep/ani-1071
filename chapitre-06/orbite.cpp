#include <cstdio>
#include <cmath>

struct Vec2
{
    double x;
    double y;
};

Vec2 add(Vec2 a, Vec2 b) {
    return {a.x + b.x, a.y + b.y};
}

Vec2 scale(Vec2 a, double k) {
    return {a.x * k, a.y * k};
}

double dot(Vec2 a, Vec2 b) {
    return a.x * b.x + a.y * b.y;
}

double length(Vec2 a) {
    return sqrt(dot(a, a));
}

const double mu = 100;

Vec2 acceleration(Vec2 p) {
    double r = length(p);
    return scale(p, -mu / (r * r * r));
}


void eulerExplicite(Vec2& p, Vec2& v, Vec2 a, double dt) {
    p = add(p, scale(v, dt));
    v = add(v, scale(a, dt));
}

void eulerSemiImplicite(Vec2& p, Vec2& v, Vec2 a, double dt) {
    v = add(v, scale(a, dt));
    p = add(p, scale(v, dt));
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
    if (x < 0 || x >= L || y < 0 || y >= H) return;   // hors de la grille : rien
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


const int N = 10000;
Vec2 trajE[N];   
Vec2 trajS[N];   

void simuler(double dt, bool releves) {

    Vec2 pE = {100, 0}, vE = {0, 1};
    Vec2 pS = {100, 0}, vS = {0, 1};
    for (int i = 1; i <= N; i++) {
        eulerExplicite(pE, vE, acceleration(pE), dt);
        eulerSemiImplicite(pS, vS, acceleration(pS), dt);
        trajE[i - 1] = pE;
        trajS[i - 1] = pS;
        if (releves && i % 500 == 0) {
            printf("%d %.6f %.6f\n", i, length(pE), length(pS));
        }
    }
    if (!releves) {
        printf("dernier pas : explicite %.6f, semi-implicite %.6f\n",
               length(pE), length(pS));
    }
}

void dessiner() {
    double maxR = 0;
    for (int i = 0; i < N; i++) {
        if (length(trajE[i]) > maxR) maxR = length(trajE[i]);
        if (length(trajS[i]) > maxR) maxR = length(trajS[i]);
    }
    double sy = 9.0 / maxR;   // 9 lignes de chaque côté du centre
    double sx = 2 * sy;       // colonnes deux fois plus serrées que les lignes
    effacer();
    for (int i = 0; i < N; i++) {
        int c = (int)std::lround(20 + trajE[i].x * sx);
        int l = (int)std::lround(10 - trajE[i].y * sy);
        point(c, l, 'E');
    }
    for (int i = 0; i < N; i++) {
        int c = (int)std::lround(20 + trajS[i].x * sx);
        int l = (int)std::lround(10 - trajS[i].y * sy);
        point(c, l, 'S');
    }
    afficher();
}

int main() {
    printf("dt = 0.5\n");
    simuler(0.5, true);
    printf("--- dessin ---\n");
    dessiner();

    printf("dt = 0.05\n");
    simuler(0.05, false);
    return 0;
}