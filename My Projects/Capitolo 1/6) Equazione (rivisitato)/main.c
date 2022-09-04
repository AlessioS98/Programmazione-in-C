#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valore, equazione;
    printf("Inserire un valore numerico: ");
    scanf("%f", &valore);
    equazione=((((3*valore+2)*valore-5)*valore-1)*valore+7)*valore-6;
    printf("Il valore dell'equazione e': %.2f\n", equazione);
    return 0;
}
