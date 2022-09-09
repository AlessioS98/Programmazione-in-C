#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, cifra, nuovonumero;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    if(numero>=0 && numero<=9)
    {
        printf("Numero invertito: %d\n", numero);
    }else{
        printf("Numero invertito: ");
        cifra=numero%10;
        nuovonumero=numero/10;
        printf("%d", cifra);
        do
        {
            cifra=nuovonumero%10;
            nuovonumero=nuovonumero/10;
            printf("%d", cifra);
        }while(nuovonumero!=0);
        printf("\n");
    }
    return 0;
}
