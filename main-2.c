#include <stdio.h>
#include <string.h>

int main()
{
    int primonumero, secondonumero;
    char *secondacifra[]={"one", "two", "three", "four", "five",
                        "six", "seven", "eight", "nine"};
    char *primacifra[]={"twenty", "thirty", "fourty", "fifty",
                          "sixty", "seventy", "eighty", "ninety"};
    char *decina[]={"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
                    "sixteen", "seventeen", "eighteen", "nineteen"};
    printf("Inserisci una cifra a due numeri: ");
    scanf("%1d%1d", &primonumero, &secondonumero);
    if(primonumero==1)
    {
        printf("Hai inserito il numero: %s\n", decina[secondonumero]);
    }else{
        if(primonumero>=2 && primonumero<=9)
        {
            if(secondonumero>=1 && secondonumero<=9)
            {
                printf("Hai inserito il numero: %s-%s\n", primacifra[primonumero-2], secondacifra[secondonumero-1]);
            }else{
                printf("Hai inserito il numero: %s\n", primacifra[primonumero-2]);
            }
        }
    }
    return 0;
}
