#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, quadrato, i, j;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    quadrato=0;
    for(i=2; ; i=i+2)
    {
        for(j=1; j<=i; j++)
        {
            quadrato=quadrato+i;
        }
        if(quadrato>numero)
        {
            break;
        }else{
            printf("%d\n", quadrato);
            quadrato=0;
        }
    }
    return 0;
}
