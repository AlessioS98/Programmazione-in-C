#include <stdio.h>
#include <stdlib.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int a, b, resto;
    if(numerator<denominator)
    {
        a=denominator;
        b=numerator;
        while(b!=0)
        {
            resto=a%b;
            a=b;
            b=resto;
        }
    }else{
        a=numerator;
        b=denominator;
        while(b!=0)
        {
            resto=a%b;
            a=b;
            b=resto;
        }
    }
    *reduced_numerator=numerator/a;
    *reduced_denominator=denominator/a;
}

int main()
{
    int numeratore, denominatore;
    int numeratoreridotto, denominatoreridotto;
    printf("Inserisci una frazione (x/y): ");
    scanf("%d/%d", &numeratore, &denominatore);
    reduce(numeratore, denominatore, &numeratoreridotto, &denominatoreridotto);
    printf("La frazione ridotta ai minimi termini e': %d/%d\n", numeratoreridotto, denominatoreridotto);
    return 0;
}
