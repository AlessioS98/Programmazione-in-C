#include <stdio.h>
#include <stdlib.h>
#define INITIAL_BALANCE 100.00
#define NUM_RATES 12

int main()
{
    int low_rate, i, mese;
    double value[12];
    printf("Inserisci il tasso di interesse: ");
    scanf("%d", &low_rate);
    printf("\nMese");
    for(i=0; i<5; i++)
    {
        printf("%6d%%", low_rate+i);
    }
    for(i=0; i<NUM_RATES; i++)
    {
        value[i]=INITIAL_BALANCE;
    }
    printf("\n");
    for(mese=1; mese<=NUM_RATES; mese++)
    {
        printf("%3d  ", mese);
        for(i=0; i<5; i++)
        {
            value[i]=((value[i]*(low_rate+i))/100)+value[i];
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }
    return 0;
}
