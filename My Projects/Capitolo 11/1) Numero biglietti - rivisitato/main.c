#include <stdio.h>
#include <stdlib.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    int amventi, amdieci, amcinque;
    int sottr1, sottr2, sottr3;
    *twenties=dollars/20;
    amventi=20*(*twenties);
    sottr1=dollars-amventi;
    *tens=sottr1/10;
    amdieci=10*(*tens);
    sottr2=sottr1-amdieci;
    *fives=sottr2/5;
    amcinque=5*(*fives);
    sottr3=sottr2-amcinque;
    *ones=sottr3/1;
}

int main()
{
    int importo;
    int tuno, tcinque, tdieci, tventi;
    printf("Inserisci un importo in dollari: $");
    scanf("%d", &importo);
    pay_amount(importo, &tventi, &tdieci, &tcinque, &tuno);
    printf("Biglietti da $20: %d\n", tventi);
    printf("Biglietti da $10: %d\n", tdieci);
    printf("Biglietti da  $5: %d\n", tcinque);
    printf("Biglietti da  $1: %d\n", tuno);
    return 0;
}
