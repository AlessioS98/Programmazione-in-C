#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Inserisci un numero (massimo 3 cifre): ");
    scanf("%d", &numero);
    if(numero>=0 && numero<=9)
    {
        printf("Il numero ha 1 cifra\n");
    }else{
        if(numero>=10 && numero<=99)
        {
            printf("Il numero ha 2 cifre\n");
        }else {
            if(numero>=100 && numero<=999)
            {
                printf("Il numero ha 3 cifre\n");
            }else{
                printf("Il numero ha piu' di tre cifre!! ERRORE\n");
            }
        }
    }
    return 0;
}
