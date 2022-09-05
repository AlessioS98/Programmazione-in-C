#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mese, giorno, anno;
    printf("Inserisci una data: (xx/yy/zzzz): ");
    scanf("%d/%d/%d", &mese, &giorno, &anno);
    printf("La data da te inserita e': %d/%d/%d\n", mese, giorno, anno);
    return 0;
}
