#include <stdio.h>
#include <stdlib.h>

int power(int operando, int elevato)
{
    if(elevato==0)
    {
        return 1;
    }else{
        if(elevato%2==0)
        {
            return operando*power(operando, (elevato/2)*(elevato/2));
        }else{
            return operando*power(operando, elevato-1);
        }
    }
}

int main()
{
    int numero, potenza, risultato;
    printf("Inserire un numero (intero): ");
    scanf("%d", &numero);
    printf("Inserire la potenza: ");
    scanf("%d", &potenza);
    risultato=power(numero, potenza);
    printf("La potenza e' uguale a: %d\n", risultato);
    return 0;
}
