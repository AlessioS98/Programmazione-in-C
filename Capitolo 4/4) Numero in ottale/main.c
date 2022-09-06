#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, ultimacifra, diviso8, penultimacifra, diviso88, terzultimacifra, diviso888, quartultimacifra, diviso8888, quintultimacifra;
    printf("Inserire un numero da 0 a 32767: ");
    scanf("%d", &numero);
    ultimacifra=numero%8;
    diviso8=numero/8;
    penultimacifra=diviso8%8;
    diviso88=diviso8/8;
    terzultimacifra=diviso88%8;
    diviso888=diviso88/8;
    quartultimacifra=diviso888%8;
    diviso8888=diviso888/8;
    quintultimacifra=diviso8888%8;
    printf("Numero in ottale: %d%d%d%d%d\n", quintultimacifra, quartultimacifra, terzultimacifra, penultimacifra, ultimacifra);
    return 0;
}
