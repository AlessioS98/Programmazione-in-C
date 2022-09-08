#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ore, minuti, minutaggio;
    printf("Inserisci un orario nel formato 24 ore (xx:xx): ");
    scanf("%d:%d", &ore, &minuti);
    minutaggio=(ore*60)+minuti;
    if(minutaggio>480)
    {
        if(minutaggio>483)
        {
            if(minutaggio>679)
            {
                if(minutaggio>767)
                {
                    if(minutaggio>840)
                    {
                        if(minutaggio>945)
                        {
                            if(minutaggio>1140)
                            {
                                if(minutaggio>1305)
                                {
                                    printf("Orario di partenza: 9:45 PM\n");
                                    printf("Orario di arrivo: 11:58 PM\n");
                                }else{
                                    printf("Orario di partenza: 9:45 PM\n");
                                    printf("Orario di arrivo: 11:58 PM\n");
                                }
                            }else{
                                printf("Orario di partenza: 7:00 PM\n");
                                printf("Orario di arrivo: 9:20 PM\n");
                            }
                        }else{
                            printf("Orario di partenza: 3:45 PM\n");
                            printf("Orario di arrivo: 5:55 PM\n");
                        }
                    }else{
                        printf("Orario di partenza: 2:00 PM\n");
                        printf("Orario di arrivo: 4:08 PM\n");
                    }
                }else{
                    printf("Orario di partenza: 12:47 PM\n");
                    printf("Orario di arrivo: 3:00 PM\n");
                }
            }else{
                printf("Orario di partenza: 11:19 AM\n");
                printf("Orario di arrivo: 1:31 AM\n");
            }
        }else{
            printf("Orario di partenza: 9:43 AM\n");
            printf("Orario di arrivo: 11:52 AM\n");
        }
    }else{
        printf("Orario di partenza: 8:00 AM\n");
        printf("Orario di arrivo: 10:16 AM\n");
    }
}
