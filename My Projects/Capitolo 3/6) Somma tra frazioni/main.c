#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, dem1, num2, dem2;
    float risultatonumeratore, risultatodenominatore;
    printf("Inserire due frazioni separate da un + (x/y+z/g): ");
    scanf("%f/%f+%f/%f", &num1, &dem1, &num2, &dem2);
    risultatonumeratore=(num1*dem2)+(num2*dem1);
    risultatodenominatore=(dem1*dem2);
    printf("Il risultato e': %.2f/%.2f\n", risultatonumeratore, risultatodenominatore);
    return 0;
}
