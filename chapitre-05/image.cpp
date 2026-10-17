#include<iostream>
char* creerImage( int l , int h);
void detruireImage( char* img) ;
void point( char* img , int l , int h , int x , int y , char c);
void afficher(const char* img , int l , int h);
void dessinerCercle(char* img , int l , int h);

char* creerImage( int l , int h){
    char* img = new char [l * h] ;
    for (int k = 0 ; k < l * h ;k++ ){
        img[k] = ' ' ;
    }
return img ;
}

void detruireImage( char* img) {
    delete[ ] img ;
}
void point( char* img , int l , int h , int x , int y , char c){
    if(x < 0 || x >= l || y<0 || y>=h){
        return ;
    }
    img[y* l + x ]= c ;
}
void afficher(const char* img , int l , int h){
    for(int y=0 ; y<h ; y++){
        for(int x=0 ; x<l ; x++){
            std::cout<< img[ y*l + x];
        }
        std::cout<<"\n" ;
    }
}
void dessinerCercle(char* img , int l , int h){
    int cx = l /2 ;
    int cy = h/2 ;
    int r= h/2 - 1 ;
    for(int y=0 ; y<h ; y++){
        for(int x =0 ; x<l ; x++){
            int dx = x - cx ;
            int dy = y - cy ; 
            if(dx * dx + dy * dy <= r*r){
                point(img , l , h ,x ,y ,'#') ;
            }
        }
    }
}

int main(){

    char* petite = creerImage(30 , 10);
    dessinerCercle(petite , 30 , 10 );
    point(petite , 30 , 10 , 15 , 5 , '#') ;
    afficher(petite , 30 , 10);
    detruireImage(petite);

    char* grande = creerImage(80 , 24);
    dessinerCercle(grande , 80 , 24);
    afficher(grande , 80 , 24);
    detruireImage(grande) ;
    return 0 ;
}