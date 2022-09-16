#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n, somma;
    somma=0;
    printf("Questo programma somma una serie di numeri double.\n");
    printf("Inserisci dei numeri double: ");
    scanf("%lf", &n);
    while(n!=0)
    {
        somma+=n;
        scanf("%lf", &n);
    }
    printf("La somma e': %.2lf\n", somma);
    return 0;
}
