#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2, a, b, resto;
    printf("Inserisci il primo numero intero: ");
    scanf("%d", &numero1);
    printf("Inserisci il secondo numero intero: ");
    scanf("%d", &numero2);
    if(numero1<numero2)
    {
        a=numero2;
        b=numero1;
        while(b!=0)
        {
            resto=a%b;
            a=b;
            b=resto;
        }
        printf("Il MCD e': %d\n", a);
    }else{
        a=numero1;
        b=numero2;
        while(b!=0)
        {
            resto=a%b;
            a=b;
            b=resto;
        }
        printf("Il MCD e': %d\n", a);
    }
    return 0;
}
