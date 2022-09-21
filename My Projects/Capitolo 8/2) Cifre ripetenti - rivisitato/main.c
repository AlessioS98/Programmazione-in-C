#include <stdio.h>
#include <stdlib.h>

int main()
{
    int volte[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i;
    int digit;
    long n;
    printf("Inserisci un numero: ");
    scanf("%ld", &n);
    while(n>0)
    {
        digit=n%10;
        volte[digit]++;
        n=n/10;
    }
    printf("Cifre: 0 1 2 3 4 5 6 7 8 9\n");
    printf("Occorrenze: ");
    for(i=0; i<10; i++)
    {
        printf("%d ", volte[i]);
    }
    printf("\n");
    return 0;
}
