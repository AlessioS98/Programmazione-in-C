#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ore, minuti;
    printf("Inserisci un numero nel formato 24 ore (xx:xx): ");
    scanf("%d:%d", &ore, &minuti);
    switch (ore)
    {
        case 0: printf("Orario nel formato 12 ore: 00:%d AM\n", minuti);
                 break;
        case 1: printf("Orario nel formato 12 ore: 01:%d AM\n", minuti);
                 break;
        case 2: printf("Orario nel formato 12 ore: 02:%d AM\n", minuti);
                 break;
        case 3: printf("Orario nel formato 12 ore: 03:%d AM\n", minuti);
                 break;
        case 4: printf("Orario nel formato 12 ore: 04:%d AM\n", minuti);
                 break;
        case 5: printf("Orario nel formato 12 ore: 05:%d AM\n", minuti);
                 break;
        case 6: printf("Orario nel formato 12 ore: 06:%d AM\n", minuti);
                 break;
        case 7: printf("Orario nel formato 12 ore: 07:%d AM\n", minuti);
                 break;
        case 8: printf("Orario nel formato 12 ore: 08:%d AM\n", minuti);
                 break;
        case 9: printf("Orario nel formato 12 ore: 09:%d AM\n", minuti);
                 break;
        case 10: printf("Orario nel formato 12 ore: 10:%d AM\n", minuti);
                 break;
        case 11: printf("Orario nel formato 12 ore: 11:%d AM\n", minuti);
                 break;
        case 12: printf("Orario nel formato 12 ore: 00:%d PM\n", minuti);
                 break;
        case 13: printf("Orario nel formato 12 ore: 01:%d PM\n", minuti);
                 break;
        case 14: printf("Orario nel formato 12 ore: 02:%d PM\n", minuti);
                 break;
        case 15: printf("Orario nel formato 12 ore: 03:%d PM\n", minuti);
                 break;
        case 16: printf("Orario nel formato 12 ore: 04:%d PM\n", minuti);
                 break;
        case 17: printf("Orario nel formato 12 ore: 05:%d PM\n", minuti);
                 break;
        case 18: printf("Orario nel formato 12 ore: 06:%d PM\n", minuti);
                 break;
        case 19: printf("Orario nel formato 12 ore: 07:%d PM\n", minuti);
                 break;
        case 20: printf("Orario nel formato 12 ore: 08:%d PM\n", minuti);
                 break;
        case 21: printf("Orario nel formato 12 ore: 09:%d PM\n", minuti);
                 break;
        case 22: printf("Orario nel formato 12 ore: 10:%d PM\n", minuti);
                 break;
        case 23: printf("Orario nel formato 12 ore: 11:%d PM\n", minuti);
                 break;
        default: printf("Orario non valido!! ERRORE\n");
    }
    return 0;
}
