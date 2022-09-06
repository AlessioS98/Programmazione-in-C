#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, ultimo, primo;
    printf("Inserire un numero a due cifre: ");
    scanf("%d", &numero);
    ultimo=numero%10;
    primo=numero/10;
    printf("Numero invertito: %d%d\n", ultimo, primo);
    return 0;
}
