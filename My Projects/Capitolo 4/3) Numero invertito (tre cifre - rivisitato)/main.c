#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int uno, due, tre;
    printf("Inserire un numero a tre cifre: ");
    scanf("%1d%1d%1d", &uno, &due, &tre);
    printf("Numero invertito: %d%d%d\n", tre, due, uno);
    return 0;
}
