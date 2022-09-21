#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    int a[N], i;
    printf("Inserisci %d elementi: ", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("L'ordine inverso sara': ");
    for(i=i-1; i>=0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("La lunghezza del vettore e': %d\n", sizeof(a)/sizeof(a[0]));
    return 0;
}
