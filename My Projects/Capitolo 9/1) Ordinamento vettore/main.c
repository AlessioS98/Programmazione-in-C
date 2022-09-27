#include <stdio.h>
#include <stdlib.h>

void selection_sort(int vet[], int quantities)
{
    if(quantities==0)
    {
        return;
    }
    int i, massimo, indice;
    massimo=vet[0];
    for(i=0; i<quantities; i++)
    {
        if(vet[i]>=massimo)
        {
            massimo=vet[i];
            indice=i;
        }
    }
    vet[indice]=vet[quantities-1];
    vet[quantities-1]=massimo;
    selection_sort(vet, quantities-1);
}

int main()
{
    int quantita, i;
    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &quantita);
    int numeri[quantita];
    printf("Inserisci %d numeri\n", quantita);
    for(i=0; i<quantita; i++)
    {
        scanf("%d", &numeri[i]);
    }
    selection_sort(numeri, quantita);
    printf("Vettore ordinato:\n");
    for(i=0; i<quantita; i++)
    {
        printf("%d ", numeri[i]);
    }
    printf("\n");
    return 0;
}
