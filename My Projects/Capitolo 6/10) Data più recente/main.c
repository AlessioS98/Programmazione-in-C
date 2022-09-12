#include <stdio.h>
#include <stdlib.h>

int main()
{
    int giorno, mese, anno;
    int giorno2, mese2, anno2;
    int giornoprima, meseprima, annoprima;
    printf("Inserisci la data: ");
    scanf("%d/%d/%d", &giorno, &mese, &anno);
    printf("Inserisci la data: ");
    scanf("%d/%d/%d", &giorno2, &mese2, &anno2);
    if(anno==anno2)
    {
        if(mese==mese2)
        {
            if(giorno==giorno2)
            {
                annoprima=anno;
                meseprima=mese;
                giornoprima=giorno;
            }else{
                if(giorno<giorno2)
                {
                    giornoprima=giorno;
                    meseprima=mese;
                    giornoprima=giorno;
                }else{
                    giornoprima=giorno2;
                    meseprima=mese2;
                    giornoprima=giorno2;
                }
            }
        }else{
            if(mese<mese2)
            {
                annoprima=anno;
                meseprima=mese;
                giornoprima=giorno;
            }else{
                annoprima=anno2;
                meseprima=mese2;
                giornoprima=giorno2;
            }
        }
    }else{
        if(anno<anno2)
        {
            annoprima=anno;
            meseprima=mese;
            giornoprima=giorno;
        }else{
            annoprima=anno2;
            meseprima=mese2;
            giornoprima=giorno2;
        }
    }
    while(giorno2!=0 && mese2!=0 && giorno2!=0)
    {
        printf("Inserisci la data: ");
        scanf("%d/%d/%d", &giorno2, &mese2, &anno2);
        if(giorno2==0 && mese2==0 && giorno2==0)
        {
            break;
        }
        if(annoprima==anno2)
        {
            if(meseprima==mese2)
            {
                if(giornoprima==giorno2)
                {
                    annoprima=anno2;
                    meseprima=mese2;
                    giornoprima=giorno2;
                }else{
                    if(giorno2<giornoprima)
                    {
                        giornoprima=giorno2;
                        meseprima=mese2;
                        giornoprima=giorno2;
                    }
                }
            }else{
                if(mese2<meseprima)
                {
                    annoprima=anno2;
                    meseprima=mese2;
                    giornoprima=giorno2;
                }
            }
        }else{
            if(anno2<annoprima)
            {
                annoprima=anno2;
                meseprima=mese2;
                giornoprima=giorno2;
            }
        }
    }
    printf("\n");
    printf("La data piu' recente e': %d/%d/%d\n", giornoprima, meseprima, annoprima);
    return 0;
}
