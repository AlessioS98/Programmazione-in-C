#include <stdio.h>
#include <stdlib.h>

int main()
{
    int duecifre, secondacifra, primacifra, ultimacifra, numero;
    printf("Inserire un numero a tre cifre: ");
    scanf("%d", &numero);
    duecifre=numero/10;
    secondacifra=duecifre%10;
    primacifra=duecifre/10;
    ultimacifra=numero%10;
    printf("Numero invertito: %d%d%d\n", ultimacifra, secondacifra, primacifra);
    return 0;
}
