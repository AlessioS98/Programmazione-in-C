#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int ore, minuti, minutaggio;
    struct orario{
        int partenza;
        int arrivo;
    }min[8]={{480, 616}, {583, 712}, {679, 811}, {767, 900}, {840, 968}, {945, 1075}, {1140, 1280},
                {1305, 1438}};
    printf("Inserisci un orario nel formato 24 ore (xx:xx): ");
    scanf("%d:%d", &ore, &minuti);
    minutaggio=(ore*60)+minuti;
    for(i=0; i<8; i++)
    {
        if(minutaggio>min[i].partenza)
        {
            if(min[i].partenza==1305)
            {
                printf("Orario di partenza: %d:%d\n", min[i].partenza/60, min[i].partenza%60);
                printf("Orario di arrivo: %d:%d\n", min[i].arrivo/60, min[i].arrivo%60);
            }else{
                continue;
            }
        }else{
            printf("Orario di partenza: %d:%d", min[i].partenza/60, min[i].partenza%60);
            if(min[i].partenza==480 || min[i].partenza==840 || min[i].partenza==1140)
            {
                printf("0\n");
            }else{
                printf("\n");
            }
            printf("Orario di arrivo: %d:%d", min[i].arrivo/60, min[i].arrivo%60);
            if(min[i].arrivo==900)
            {
                printf("0\n");
            }else{
                printf("\n");
            }
            break;
        }
    }
    return 0;
}
