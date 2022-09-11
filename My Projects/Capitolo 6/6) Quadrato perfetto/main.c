#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, quadrato, cont;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    quadrato=0;
    cont=0;
    if(numero==0)
    {
        printf("Hai inserito 0!!");
    }else{
        while(quadrato<=numero)
        {
            cont=cont+2;
            quadrato=cont*cont;
            if(quadrato>numero)
            {
                break;
            }else{
                printf("%d\n", quadrato);
            }
        }
    }
    return 0;
}
