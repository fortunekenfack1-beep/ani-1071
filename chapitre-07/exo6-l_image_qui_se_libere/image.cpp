#include<cstdio>

double lerp(double a, double b, double t)
{
    return a + (b - a) * t;
}

class Image
{
private:
    int   larg, haut;
    char* pixels;

public:
    static int vivantes;                      

    Image(int l, int h) : larg(l), haut(h), pixels(new char[l * h])
    {
        vivantes++;
        effacer();
    }

    ~Image()
    {
        delete[] pixels;                       
        vivantes--;
    }

    Image(const Image&) = delete;              
    Image& operator=(const Image&) = delete;   

    int largeur() const { return larg; }
    int hauteur() const { return haut; }

    void effacer(char c = ' ')
    {
        for (int i = 0; i < larg * haut; i++) pixels[i] = c;
    }

    void point(int x, int y, char c = '#')
    {
        if (x < 0 || x >= larg || y < 0 || y >= haut) return;
        pixels[y * larg + x] = c;
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

    void afficher() const
    {
        for (int y = 0; y < haut; y++)
        {
            for (int x = 0; x < larg; x++) printf("%c", pixels[y * larg + x]);
            printf("\n");
        }
    }
};

int Image::vivantes = 0;                      

int main()
{
    
    printf("Vivantes :\n");
    printf("avant la boucle : %d\n", Image::vivantes);
    for (int tour = 1; tour <= 10; tour++)
    {
        Image img(20, 10);                     
        img.segment(0, 0, 19, 9);
        printf("tour %d : %d\n", tour, Image::vivantes);
    }                                          
    printf("apres la boucle : %d\n", Image::vivantes);

    
    printf("\nDessin :\n");
    Image a(40, 20);
    a.segment(0, 0, a.largeur() - 1, a.hauteur() - 1);
    a.segment(0, a.hauteur() - 1, a.largeur() - 1, 0);
    a.afficher();

            // Image b = a;           

    printf("\nfin de main : %d image vivante\n", Image::vivantes);
    return 0;
}
