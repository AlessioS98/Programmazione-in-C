#include <stdio.h>
#include <stdlib.h>

int main()
{
    float operando1, operando2, operando3, primo, risultato;
    char op1, op2;
    printf("Inserisci una piccola espressione numerica (massimo 3 numeri): ");
    scanf("%f%c%f%c%f", &operando1, &op1, &operando2, &op2, &operando3);
    if((op1!='+' && op1!='-' && op1!='*' && op1!='/') || (op2!='+' && op2!='-' && op2!='*' && op2!='/'))
    {
        printf("Espressione non valida!! ERRORE\n");
    }else{
        switch (op1)
        {
            case '+': primo=operando1+operando2;
                      break;
            case '-': primo=operando1-operando2;
                      break;
            case '*': primo=operando1*operando2;
                      break;
            case '/': primo=operando1/operando2;
                      break;
        }
        switch (op2)
        {
            case '+': risultato=primo+operando3;
                      break;
            case '-': risultato=primo-operando3;
                      break;
            case '*': risultato=primo*operando3;
                      break;
            case '/': risultato=primo/operando3;
                      break;
        }
        printf("Il risultato e': %.2f\n", risultato);
    }
    return 0;
}
