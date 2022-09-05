#include <stdio.h>
#include <stdlib.h>

int main()
{
    float saldo, tasso, mensile;
    float ratamensileint;
    float primomese, secondomese, terzomese;
    printf("Inserire un saldo in dollari: $");
    scanf("%f", &saldo);
    printf("Inserire il tasso di interesse: ");
    scanf("%f", &tasso);
    printf("Inserire pagamento mensile: $");
    scanf("%f", &mensile);
    printf("\n");
    ratamensileint=(tasso/100)/12;
    primomese=(saldo-mensile)+(saldo*ratamensileint);
    secondomese=(primomese-mensile)+(primomese*ratamensileint);
    terzomese=(secondomese-mensile)+(secondomese*ratamensileint);
    printf("Bilancio dopo il primo pagamento: $%.2f\n", primomese);
    printf("Bilancio dopo il secondo pagamento: $%.2f\n", secondomese);
    printf("Bilancio dopo il terzo pagamento: $%.2f\n", terzomese);
    return 0;
}
