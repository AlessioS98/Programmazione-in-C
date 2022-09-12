#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, i;
    float saldo, tasso, pagamento, rata, rimanente;
    printf("Inserisci il numero di pagamenti mensili: ");
    scanf("%d", &numero);
    printf("Inserisci il valore del saldo: $");
    scanf("%f", &saldo);
    printf("Inserisci il tasso di interesse: ");
    scanf("%f", &tasso);
    printf("Inserisci pagamento mensile: $");
    scanf("%f", &pagamento);
    rata=(tasso/100)/12;
    rimanente=(saldo-pagamento)+(saldo*rata);
    printf("Saldo rimanente dopo il 1° pagamento: $%.2f\n", rimanente);
    for(i=2; i<=numero; i++)
    {
        rimanente=(rimanente-pagamento)+(rimanente*rata);
        printf("Saldo rimanente dopo il %d° pagamento: $%.2f\n", i, rimanente);
    }
    return 0;
}

