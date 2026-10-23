#include<iostream>

struct Vec2
{
    double x ;
    double y ;
};
struct Particule 
{
   Vec2 position ;
    Vec2 vitesse ;
    double vie ;
};
struct A 
{
    char c ;
    int n ;
};
struct B 
{
    char c ;
    double d ;
    char e ;
};
struct C 
{
    char c ;
    double d ;
    char e ;
 };
 struct ParticuleReordonnee 
 {
    double vie ;
    char etat ;
    Vec2 position ;
    Vec2 vitesse ;
   
 } ;
 struct Ordre1{  Vec2 position ;  Vec2 vitesse ;double vie ; char etat ;};
 struct Ordre2{  Vec2 position ;  Vec2 vitesse ; char etat ;double vie ;};
 struct Ordre3{  double vie ; char etat ; Vec2 position ;  Vec2 vitesse ; };
int main(){
    std::cout<< "taille A = " << sizeof(A) << std::endl;
    std::cout<< "taille B = "<<sizeof(B) <<"\n";
    std::cout<< "taille C = "<<sizeof(C) <<"\n";
    std::cout<< "taille Particule = "<<sizeof(Particule) <<"\n";
    std::cout<< "taille Vec2 = "<<sizeof(Vec2) <<"\n";
    std::cout<< "taille ParticuleReordonne = "<<sizeof(ParticuleReordonnee)<<"\n" ;
    std::cout<< "taille ordre1 = "<<sizeof(Ordre1) <<"\n";
    std::cout<< "taille ordre2 = "<<sizeof(Ordre2) <<"\n";
    std::cout<< "taille ordre3 = "<<sizeof(Ordre3) <<"\n";
    return 0 ; 
}
