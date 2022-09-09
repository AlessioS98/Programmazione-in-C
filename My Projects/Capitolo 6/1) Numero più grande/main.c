#include <stdio.h>
#include <stdlib.h>

int main()
{
    float massimo, numero;
    printf("!Digita 0 o un numero negativo per terminare!\n");
    printf("Inserisci un numero: ");
    scanf("%f", &numero);
    massimo=numero;
    while(numero>0)
    {
        printf("Inserisci un numero: ");
        scanf("%f", &numero);
        if(numero>massimo)
        {
            massimo=numero;
        }
    }
    printf("Il numero piu' grande e': %.2f\n", massimo);
    return 0;
}
