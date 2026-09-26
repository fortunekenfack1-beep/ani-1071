#include <cstdio>
int main () {
    unsigned int c = 0x2A7FCCFF ;
    unsigned  int rouge = (c >> 24) & 0xFF ;
    unsigned  int vert = (c >> 16) & 0xFF ;
    unsigned  int bleu = (c >> 8) & 0xFF ;
    unsigned  int alpha = c & 0xFF ;
    printf("couleur d'origine : %08X\n" , c) ;
    printf("rouge : %u\n" , rouge) ;
    printf("vert : %u\n" , vert) ;
    printf("bleu : %u\n" , bleu) ;
    printf("alpha : %u\n" , alpha) ;
    unsigned int recomposee = (rouge << 24) | (vert << 16) | (bleu << 8) | alpha ;
    printf("couleur recomposée : %08X\n" , recomposee);
    unsigned int rougesombre = rouge/2 ;
    unsigned int vertsombre = vert/2 ;
    unsigned int bleusombre = bleu/2 ;
    unsigned int sombre = (rougesombre << 24) | (vertsombre << 16) | (bleusombre << 8) | alpha ;
 printf("couleur assombrie : %08X\n" , sombre) ; 
    return 0 ;
}
