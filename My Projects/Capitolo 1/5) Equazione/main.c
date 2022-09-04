#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valore, quinta, quarta, terza, seconda, equazione;
    printf("Inserire un valore numerico: ");
    scanf("%f", &valore);
    quinta=valore*valore*valore*valore*valore;
    quarta=valore*valore*valore*valore;
    terza=valore*valore*valore;
    seconda=valore*valore;
    equazione=(3*quinta)+(2*quarta)-(5*terza)-(seconda)+(7*valore)-6;
    printf("Il valore dell'equazione e': %.2f\n", equazione);
    return 0;
}
