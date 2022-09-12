#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, i, j;
    float somma, fattoriale, addendo;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    somma=1;
    for(i=1; i<=numero; i++)
    {
        fattoriale=1;
        for(j=1; j<=i; j++)
        {
            fattoriale=fattoriale*j;
        }
        addendo=1/fattoriale;
        somma=somma+addendo;
    }
    printf("Il numero di Nepero e': %.2f\n", somma);
    return 0;
}
