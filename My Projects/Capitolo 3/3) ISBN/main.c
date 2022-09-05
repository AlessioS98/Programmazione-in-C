#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gs1, gi, pc, in, cd;
    printf("Inserire l'ISBN del libro: (GS1-GI-PC-IN-CD): ");
    scanf("%d-%d-%d-%d-%d", &gs1, &gi, &pc, &in, &cd);
    printf("Prefisso GS1: %d\n", gs1);
    printf("Gruppo identificativo: %d\n", gi);
    printf("Codice di pubblicazione: %d\n", pc);
    printf("Numero articolo: %d\n", in);
    printf("Cifra di controllo: %d\n", cd);
    return 0;
}
