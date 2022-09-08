#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, decina, unita;
    printf("Inserisci un numero a due cifre: ");
    scanf("%d", &numero);
    unita=numero%10;
    decina=numero/10;
    if(numero==10)
    {
        printf("Numero letterale: TEN\n");
    }else{
        if(numero>=11 && numero<=19)
        {
            switch (numero)
            {
                case 11: printf("Numero letterale: ELEVEN\n");
                         break;
                case 12: printf("Numero letterale: TWELVE\n");
                         break;
                case 13: printf("Numero letterale: THIRTEEN\n");
                         break;
                case 14: printf("Numero letterale: FOURTEEN\n");
                         break;
                case 15: printf("Numero letterale: FIFTEEN\n");
                         break;
                case 16: printf("Numero letterale: SIXTEEN\n");
                         break;
                case 17: printf("Numero letterale: SEVENTEEN\n");
                         break;
                case 18: printf("Numero letterale: EIGHTEEN\n");
                         break;
                case 19: printf("Numero letterale: NINETEEN\n");
                         break;
            }
        }else{
            switch (decina)
            {
                case 2: printf("Numero letterale: TWENTY");
                        break;
                case 3: printf("Numero letterale: THIRTY");
                        break;
                case 4: printf("Numero letterale: FOURTY");
                        break;
                case 5: printf("Numero letterale: FIFTY");
                        break;
                case 6: printf("Numero letterale: SIXTY");
                        break;
                case 7: printf("Numero letterale: SEVENTY");
                        break;
                case 8: printf("Numero letterale: EIGHTY");
                        break;
                case 9: printf("Numero letterale: NINETY");
                        break;
            }
            switch (unita)
            {
                case 0: printf("\n");
                        break;
                case 1: printf("-ONE\n");
                        break;
                case 2: printf("-TWO\n");
                        break;
                case 3: printf("-THREE\n");
                        break;
                case 4: printf("-FOUR\n");
                        break;
                case 5: printf("-FIVE\n");
                        break;
                case 6: printf("-SIX\n");
                        break;
                case 7: printf("-SEVEN\n");
                        break;
                case 8: printf("-EIGHT\n");
                        break;
                case 9: printf("-NINE\n");
                        break;
            }
        }
    }
    return 0;
}
