#include <stdio.h>
#include <stdlib.h>

int main()
{
    int partenza[8]={480, 483, 679, 767, 840, 945, 1140, 1305};
    int arrivo[8]={616, 712, 811, 900, 968, 1075, 1280, 1438};
    int hours, minutes, i, j, ore, minuti;
    int minutaggio;
    printf("Inserisci un orario nel formato 24 ore (xx:yy): ");
    scanf("%d:%d", &ore, &minuti);
    minutaggio=(ore*60)+minuti;
    for(i=0; i<8; i++)
    {
        if(minutaggio>partenza[i])
        {
            continue;
        }else{
            j=1;
            hours=0;
            do
            {
                hours=60*j;
                j++;
            }while(hours<=partenza[i]);
            hours=hours-60;
            j=j-2;
            minutes=partenza[i]-hours;
            printf("Orario di partenza piu' vicino: %d:%d", j, minutes);
            if(minutes==0)
            {
                printf("0");
            }
            printf("\n");
            break;
        }
    }
    return 0;
}
