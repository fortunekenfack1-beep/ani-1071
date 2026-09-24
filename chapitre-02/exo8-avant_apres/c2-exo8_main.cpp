#include <cstdio>
int main () {
int a = 3;
int b = a++ + 1;
int c = ++a * 2;
int d = a-- - --a;
printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
return 0 ;
}