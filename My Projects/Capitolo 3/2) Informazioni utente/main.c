#include <stdio.h>
#include <stdlib.h>

int main()
{
    int articoli, mese, giorno, anno;
    float prezzo;
    printf("Inserire numero di articoli: ");
    scanf("%d", &articoli);
    printf("Inserisci prezzo unitario: $");
    scanf("%f", &prezzo);
    printf("Inserisci data di acquisto: (xx/yy/zzzz): ");
    scanf("%d/%d/%d", &mese, &giorno, &anno);
    printf("Item\tPrezzo\t\tData\n\tUnitario\tdi\n\t\t\tAcquisto\n%d\t$%.2f\t\t%d/%d/%d\n", articoli, prezzo, mese, giorno, anno);
    return 0;
}
