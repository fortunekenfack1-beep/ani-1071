executant correctement notre programme sans void , on obtient:
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ clang++ c2-demo3_main.cpp -o programme

chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ ./programme
bool            :1 octets
char            :1 octets
short           :2 octetsen
int             :4 octets
long            :4 octets
long long       :8 octets
unsigned char   :1 octets
unsigned int    :4 octets
double          :8 octets
long   double   :16 octets
```
en ajoutant void , on obtient 
```
chris@DESKTOP-RSAB6V8 MSYS /c/Users/chris/ani-1071/chapitre-02
$ clang++ c2-demo3_main.cpp -o programme
c2-demo3_main.cpp:13:49: error: invalid application of 'sizeof' to an incomplete type 'void'
   13 |         printf("void            :%zu octets\n", sizeof(void));
      |                                                 ^     ~~~~~~
1 error generated.
```
ce message m'apprend que le type void est incomplet et est utiliser pour indique l'absence de valeurs
le type occupant une taille differente est long double change en fonction du compilateur . lorsque la taille varie , cela creer un bug dans notre programme
un type de n octects peut contenir 2^8 soit 256 valeurs distinctes .
