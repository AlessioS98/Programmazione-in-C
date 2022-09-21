#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    bool digit_seen[10]={false};
    int valori[10];
    int i, j;
    int digit;
    long n;
    i=0;
    printf("Inserisci un numero: ");
    scanf("%ld", &n);
    while(n>0)
    {
        digit=n%10;
        if(digit_seen[digit])
        {
            valori[i]=digit;
            i++;
        }
        digit_seen[digit]=true;
        n=n/10;
    }
    if(i==0)
    {
        printf("Nessuna cifra che si ripete\n");
    }else{
        printf("Le cifre che si ripetono sono: ");
        for(j=0; j<i; j++)
        {
            printf("%d ", valori[j]);
        }
        printf("\n");
    }
    return 0;
}
