#include <iostream>
#include <cstdlib>
void tracerSegment( int x0 , int y0 , int x1 , int y1  ) ;

void tracerSegment( int x0 , int y0 , int x1 , int y1  ) {
    int dx = abs(x1 - x0) ;
    int sx = ( x0<x1) ? 1 : -1 ;
    int dy = -abs(y1 - y0) ;
    int sy = (y0<y1) ? 1 : -1 ;
    int erreur = dx + dy ;
    while(true){
        std::cout<< x0 << " "<< y0 <<"\n";
        if(x0==x1 && y0==y1) break ;

        int e2 = 2 * erreur ;

        if(e2<= dx){ erreur = erreur + dx ; y0 = y0 + sy ;  } 
           if(e2>= dy){ erreur = erreur + dy ; x0 = x0 + sx ;  } 
        }
        
        
    }


int main(){
    int x0 , y0 , x1 , y1 ;
    std::cin>> x0 >> y0 >> x1 >> y1 ;
    tracerSegment (x0 , y0 , x1 , y1);
    return 0 ;
}
