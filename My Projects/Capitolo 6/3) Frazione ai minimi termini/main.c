#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeratore, denominatore, a, b, resto, numter, denter;
    printf("Inserisci una frazione (x/y): ");
    scanf("%d/%d", &numeratore, &denominatore);
    if(numeratore<denominatore)
    {
        a=denominatore;
        b=numeratore;
        while(b!=0)
        {
            resto=a%b;
            a=b;
            b=resto;
        }
    }else{
        a=numeratore;
        b=denominatore;
        while(b!=0)
        {
            resto=a%b;
            a=b;
            b=resto;
        }
    }
    numter=numeratore/a;
    denter=denominatore/a;
    printf("La frazione ridotta ai minimi termini e': %d/%d\n", numter, denter);
    return 0;
}
