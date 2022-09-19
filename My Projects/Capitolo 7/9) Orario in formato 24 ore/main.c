#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ore, minuti;
    char primalettera, secondalettera;
    printf("Inserisci un orario nel formato 12 ore (xx:yy PM/AM): ");
    scanf("%d:%d ", &ore, &minuti);
    scanf("%c%c", &primalettera, &secondalettera);
    if(secondalettera!='M')
    {
        printf("Orario non valido!!! ERRORE\n");
    }else{
        if(primalettera!='A' && primalettera!='P')
        {
            printf("Orario non valido!!! ERRORE\n");
        }else{
            if(primalettera=='P')
            {
                if(ore==0 || ore>=13)
                {
                    printf("Orario non valido!!! ERRORE\n");
                }else{
                    switch (ore)
                    {
                        case 1: printf("Orario nel formato 24 ore: 13:");
                                break;
                        case 2: printf("Orario nel formato 24 ore: 14:");
                                break;
                        case 3: printf("Orario nel formato 24 ore: 15:");
                                break;
                        case 4: printf("Orario nel formato 24 ore: 16:");
                                break;
                        case 5: printf("Orario nel formato 24 ore: 17:");
                                break;
                        case 6: printf("Orario nel formato 24 ore: 18:");
                                break;
                        case 7: printf("Orario nel formato 24 ore: 19:");
                                break;
                        case 8: printf("Orario nel formato 24 ore: 20:");
                                break;
                        case 9: printf("Orario nel formato 24 ore: 21:");
                                break;
                        case 10: printf("Orario nel formato 24 ore: 22:");
                                 break;
                        case 11: printf("Orario nel formato 24 ore: 23:");
                                 break;
                        case 12: printf("Orario nel formato 24 ore: 12:");
                                 break;
                    }
                    if(minuti>=60)
                    {
                        printf("Orario non valido!!! ERRORE\n");
                    }else{
                        if(minuti>=0 && minuti<=9)
                        {
                            printf("0%d\n", minuti);
                        }else{
                            printf("%d\n", minuti);
                        }
                    }
                }
            }else{
                if(ore==0 || ore>=13)
                {
                    printf("Orario non valido!!! ERRORE\n");
                }else{
                    switch (ore)
                    {
                        case 1: printf("Orario nel formato 24 ore: 01:");
                                break;
                        case 2: printf("Orario nel formato 24 ore: 02:");
                                break;
                        case 3: printf("Orario nel formato 24 ore: 03:");
                                break;
                        case 4: printf("Orario nel formato 24 ore: 04:");
                                break;
                        case 5: printf("Orario nel formato 24 ore: 05:");
                                break;
                        case 6: printf("Orario nel formato 24 ore: 06:");
                                break;
                        case 7: printf("Orario nel formato 24 ore: 07:");
                                break;
                        case 8: printf("Orario nel formato 24 ore: 08:");
                                break;
                        case 9: printf("Orario nel formato 24 ore: 09:");
                                break;
                        case 10: printf("Orario nel formato 24 ore: 10:");
                                 break;
                        case 11: printf("Orario nel formato 24 ore: 11:");
                                 break;
                        case 12: printf("Orario nel formato 24 ore: 00:");
                                 break;
                    }
                    if(minuti>=60)
                    {
                        printf("Orario non valido!!! ERRORE\n");
                    }else{
                        if(minuti>=0 && minuti<=9)
                        {
                            printf("0%d\n", minuti);
                        }else{
                            printf("%d\n", minuti);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
