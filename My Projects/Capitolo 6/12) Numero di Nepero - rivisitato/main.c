#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    float somma, fattoriale, addendo, limite;
    printf("Inserisci un numero epsilon: ");
    scanf("%f", &limite);
    somma=1;
    i=1;
    fattoriale=1;
    while(somma>=limite)
    {
        for(j=1; j<=i; j++)
        {
            fattoriale=fattoriale*j;
        }
        addendo=1/fattoriale;
        somma=somma+addendo;
        i++;
        fattoriale=1;
    }
    printf("Il numero di Nepero e': %.2f\n", somma);
}
