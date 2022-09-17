#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, den1, num2, den2, risnum, risden;
    char op;
    printf("Inserisci frazioni e operazione da fare: ");
    scanf("%d/%d", &num1, &den1);
    scanf("%c", &op);
    scanf("%d/%d", &num2, &den2);
    switch (op)
    {
        case '+': risnum=(num1*den2)+(num2*den1);
                  risden=den1*den2;
                  printf("La somma e': %d/%d\n", risnum, risden);
                  break;
        case '-': risnum=(num1*den2)-(num2*den1);
                  risden=den1*den2;
                  printf("La sottrazione e': %d/%d\n", risnum, risden);
                  break;
        case '*': risnum=num1*num2;
                  risden=den1*den2;
                  printf("La moltiplicazione e': %d/%d\n", risnum, risden);
                  break;
        case '/': risnum=num1*den2;
                  risden=den1*num2;
                  printf("La divisione e': %d/%d\n", risnum, risden);
                  break;
        default: printf("Operazione non valida!!! ERRORE");
    }
    return 0;
}
