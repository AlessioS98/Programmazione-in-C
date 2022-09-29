#include <stdio.h>
#include <stdlib.h>

float operazione(float operando)
{
    float quinta, quarta, terza, seconda, result;
    quinta=operando*operando*operando*operando*operando;
    quarta=operando*operando*operando*operando;
    terza=operando*operando*operando;
    seconda=operando*operando;
    result=(3*quinta)+(2*quarta)-(5*terza)-(seconda)+(7*operando)-(6);
    return result;
}

int main()
{
    float numero, risultato;
    printf("Inserisci un numero: ");
    scanf("%f", &numero);
    risultato=operazione(numero);
    printf("Il risultato e': %.2f\n", risultato);
    return 0;
}
