#include<iostream>
#include<cmath>
struct Vec2
{
    double x , y ;
    Vec2(): x(0),y(0) {};
    Vec2(double x_ , double y_) : x(x_) , y(y_) {} ;


double length() const {
return sqrt(x *x + y*y) ;
 }

double dot(Vec2 b) const {
     return x*b.x + y*b.y ;

}
Vec2 normalized () const {
   double l= length() ;
    if(l==0){
        return Vec2();
    }else{
        return Vec2(x/l , y/l);
    }
}
void normalize() {
double l= length() ;
    if(l!=0){
    x = x/l;
    y = y/l;
    }
}

Vec2 operator+(Vec2 b)const {
    return Vec2(x + b.x , y + b.y);

}

Vec2 operator-(Vec2 b)const {
    return Vec2(x - b.x , y - b.y);
    
}
Vec2 operator-()const {
    return Vec2(-x  , -y );
    
}
Vec2 operator/(double k)const {
    return Vec2(x / k , y / k);
    
}
bool operator==(Vec2 b) const {
    return x == b.x && y==b.y ;
}

bool operator!=(Vec2 b) const {
    return !(*this == b)  ;
}

Vec2 operator*(double k)const {
    return Vec2(x * k , y * k);
    
}
Vec2& operator-=(Vec2 b){
    x-= b.x ;
    y-= b.y ;
    return *(this) ;
}
Vec2& operator+=(Vec2 b){
    x+= b.x ;
    y+= b.y ;
    return *(this) ;
}
Vec2& operator*=(double k){
    x*= k ;
    y*= k;
    return *(this) ;
}
double& operator [](int i){
    return i==0 ? x : y ;
}
double operator [](int i) const {
    return i==0 ? x : y ;
}
};
Vec2 operator*(double k , Vec2 v){
    return v*k ;
}
std::ostream& operator<<(std::ostream& os , Vec2 v){
    return os<<"( "<<v.x<<" , "<<v.y<<")";
}
int main(){
    std::cout << "Essais :" << std::endl;

    Vec2 a;
    Vec2 b(3.0, 4.0);
     std::cout << "Vec2() = " << a << std::endl;
     std::cout << "Vec2(3, 4) = " << b << std::endl;

     std::cout << "b.length() = " << b.length() << std::endl;
     std::cout << "b.dot(Vec2(1, 2)) = " << b.dot(Vec2(1.0, 2.0)) << std::endl;
     std::cout << "b.normalized() = " << b.normalized() << std::endl;
     std::cout << "Vec2().normalized() = " << a.normalized() << std::endl;

    Vec2 c(3.0, 4.0);
    c.normalize();
     std::cout << "c.normalize() puis c = " << c << std::endl;

     std::cout << "b + Vec2(1, 1) = " << b + Vec2(1.0, 1.0) << std::endl;
     std::cout << "b - Vec2(1, 1) = " << b - Vec2(1.0, 1.0) << std::endl;
     std::cout << "-b = " << -b << std::endl;
     std::cout << "b / 2.0 = " << b / 2.0 << std::endl;
     std::cout << "b == Vec2(3, 4) : " << (b == Vec2(3.0, 4.0)) << std::endl;
     std::cout << "b != Vec2(3, 4) : " << (b != Vec2(3.0, 4.0)) << std::endl;
     std::cout << "b * 2.0 = " << b * 2.0 << std::endl;
     std::cout << "2.0 * b = " << 2.0 * b << std::endl;

    Vec2 d(1.0, 1.0);
    d += Vec2(2.0, 3.0);
     std::cout << "d += (2, 3) -> " << d << std::endl;
    d -= Vec2(1.0, 1.0);
     std::cout << "d -= (1, 1) -> " << d << std::endl;
    d *= 3.0;
     std::cout << "d *= 3.0 -> " << d << std::endl;

    Vec2 e(1.0, 2.0);
     std::cout << "e[0] = " << e[0] << ", e[1] = " << e[1] << std::endl;
    e[1] = 5.0;
     std::cout << "e[1] = 5.0 -> " << e << std::endl;

     std::cout << std::endl << "Chute :" << std::endl;

    Vec2 p0(0.0, 10.0);
    Vec2 v0(3.0, 0.0);
    Vec2 g(0.0, -9.81);
    double dt = 0.1;

    Vec2 p = p0;
    Vec2 v = v0;
    double t = 0.0;
    int pas = 0;

    while (p.y >= 0)
    {
        v += g * dt;
        p += v * dt;
        t += dt;
        pas++;
     std::cout << "pas " << pas << " : t = " << t
             << ", p = " << p << ", v = " << v << std::endl;
    }

     std::cout << std::endl << "Sol :" << std::endl;

    
    double qa = g.y / 2.0;
    double qb = v0.y;
    double qc = p0.y;
    double delta = qb * qb - 4.0 * qa * qc;
    double tSol = (-qb - sqrt(delta)) / (2.0 * qa);   

     std::cout << "instant de la formule : t = " << tSol << std::endl;
     std::cout << "premier pas avec p.y < 0 : pas " << pas
         << ", t = " << t << ", p.y = " << p.y << std::endl;

    return 0;
}
