#include<vec2.h>
#include<cmath>
namespace ani {
    namespace{
        double carre(double c){
            return c*c ;
        }
    }
      Vec2 add (Vec2 a , Vec2 b){
          return { a.x + b.x , a.y + b.y};
      }
      double produit(Vec2 a , Vec2 b){
          return a.x*b.x + a.y*b.y ;
      }
      double longueur(Vec2 a){
          return sqrt(carre(a.x) + carre(a.y));
      } 
 }