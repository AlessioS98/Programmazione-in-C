#include <stdio.h>
#include <stdlib.h>

int main()
{
    int importo;
    int tventi, tdieci, tcinque, tuno;
    int amventi, amdieci, amcinque, amuno;
    int sottr1, sottr2, sottr3;
    printf("Inserisci un importo in dollari: $");
    scanf("%d", &importo);
    printf("\n");
    tventi=importo/20;
    amventi=20*tventi;
    sottr1=importo-amventi;
    tdieci=sottr1/10;
    amdieci=10*tdieci;
    sottr2=sottr1-amdieci;
    tcinque=sottr2/5;
    amcinque=5*tcinque;
    sottr3=sottr2-amcinque;
    tuno=sottr3/1;
    amuno=1*tuno;
    printf("Biglietti da $20: %d\n", tventi);
    printf("Biglietti da $10: %d\n", tdieci);
    printf("Biglietti da  $5: %d\n", tcinque);
    printf("Biglietti da  $1: %d\n", tuno);
    return 0;
}
