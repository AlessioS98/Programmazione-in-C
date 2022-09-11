#include <stdio.h>
#include <stdlib.h>

int main()
{
    int giorni, inizio;
    printf("Inserisci il numero di giorni: ");
    scanf("%d", &giorni);
    printf("Inserisci il giorno di inizio mese (1=Dom...7=Sab): ");
    scanf("%d", &inizio);
    for(int i=1; i<=giorni; i++)
    {
        if(inizio==1)
        {
            if(i==7 || i==14 || i==21 || i==28)
            {
                printf("%d", i);
                printf("\n");
            }else{
                printf("%d\t", i);
            }
        }else{
            if(inizio==2)
            {
                if(i==1)
                {
                    printf("\t");
                }
                if(i==6 || i==13 || i==20 || i==27)
                {
                    printf("%d", i);
                    printf("\n");
                }else{
                    printf("%d\t", i);
                }
            }else{
                if(inizio==3)
                {
                    if(i==1)
                    {
                        printf("\t\t");
                    }
                    if(i==5 || i==12 || i==19 || i==26)
                    {
                        printf("%d", i);
                        printf("\n");
                    }else{
                        printf("%d\t", i);
                    }
                }else{
                    if(inizio==4)
                    {
                        if(i==1)
                        {
                            printf("\t\t\t");
                        }
                        if(i==4 || i==11 || i==18 || i==25)
                        {
                            printf("%d", i);
                            printf("\n");
                        }else{
                            printf("%d\t", i);
                        }
                    }else{
                        if(inizio==5)
                        {
                            if(i==1)
                            {
                                printf("\t\t\t\t");
                            }
                            if(i==3 || i==10 || i==17 || i==24)
                            {
                                printf("%d", i);
                                printf("\n");
                            }else{
                                printf("%d\t", i);
                            }
                        }else{
                            if(inizio==6)
                            {
                                if(i==1)
                                {
                                    printf("\t\t\t\t\t");
                                }
                                if(i==2 || i==9 || i==16 || i==23 || i==30)
                                {
                                    printf("%d", i);
                                    printf("\n");
                                }else{
                                    printf("%d\t", i);
                                }
                            }else{
                                if(inizio==7)
                                {
                                    if(i==1)
                                    {
                                        printf("\t\t\t\t\t\t");
                                    }
                                    if(i==1 || i==8 || i==15 || i==22 || i==29)
                                    {
                                        printf("%d", i);
                                        printf("\n");
                                    }else{
                                        printf("%d\t", i);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("\n");
    return 0;
}
