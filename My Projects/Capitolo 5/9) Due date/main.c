#include <stdio.h>
#include <stdlib.h>

int main()
{
    int giorno1, mese1, anno1;
    int giorno2, mese2, anno2;
    printf("Inserisci la prima data (xx/yy/zzzz): ");
    scanf("%d/%d/%d", &giorno1, &mese1, &anno1);
    printf("Inserisci la seconda data (xx/yy/zzzz): ");
    scanf("%d/%d/%d", &giorno2, &mese2, &anno2);
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
    return 0;
}
