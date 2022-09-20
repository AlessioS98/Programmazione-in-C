#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    long int fattoriale;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    fattoriale=numero;
    while(numero!=1)
    {
        numero--;
        fattoriale=fattoriale*numero;
    }
    printf("Il fattoriale e': %ld\n", fattoriale);
    return 0;
}
