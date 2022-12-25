#include <stdio.h>
#include <stdlib.h>

void compare_dates(int giorno1, int mese1, int anno1, int giorno2, int mese2, int anno2);

int main()
{
    struct date{
        int giorno1;
        int mese1;
        int anno1;
        int giorno2;
        int mese2;
        int anno2;
    };
    struct date data;
    printf("Inserisci la prima data (xx/yy/zzzz): ");
    scanf("%d/%d/%d", &data.giorno1, &data.mese1, &data.anno1);
    printf("Inserisci la seconda data (xx/yy/zzzz): ");
    scanf("%d/%d/%d", &data.giorno2, &data.mese2, &data.anno2);
    compare_dates(data.giorno1, data.mese1, data.anno1, data.giorno2, data.mese2, data.anno2);
    return 0;
}

void compare_dates(int giorno1, int mese1, int anno1, int giorno2, int mese2, int anno2)
{
    if(anno2==anno1)
    {
        if(mese1==mese2)
        {
            if(giorno1==giorno2)
            {
                printf("Le date coincidono\n");
            }else{
                if(giorno1<giorno2)
                {
                    printf("La data che si trova prima e': %d/%d/%d\n", giorno1, mese1, anno1);
                }else{
                    printf("La data che si trova prima e': %d/%d/%d\n", giorno2, mese2, anno2);
                }
            }
        }else{
            if(mese1<mese2)
            {
                printf("La data che si trova prima e': %d/%d/%d\n", giorno1, mese1, anno1);
            }else{
                printf("La data che si trova prima e': %d/%d/%d\n", giorno2, mese2, anno2);
            }
        }
    }else{
        if(anno1<anno2)
        {
            printf("La data che si trova prima e': %d/%d/%d\n", giorno1, mese1, anno1);
        }else{
            printf("La data che si trova prima e': %d/%d/%d\n", giorno2, mese2, anno2);
        }
    }
}
