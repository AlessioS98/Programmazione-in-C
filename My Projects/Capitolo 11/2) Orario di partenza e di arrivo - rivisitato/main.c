#include <stdio.h>
#include <stdlib.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    if(desired_time>480)
    {
        if(desired_time>583)
        {
            if(desired_time>679)
            {
                if(desired_time>767)
                {
                    if(desired_time>840)
                    {
                        if(desired_time>945)
                        {
                            if(desired_time>1140)
                            {
                                if(desired_time>1305)
                                {
                                    *departure_time=1305;
                                    *arrival_time=718;
                                }else{
                                    *departure_time=1305;
                                    *arrival_time=718;
                                }
                            }else{
                                *departure_time=1140;
                                *arrival_time=1280;
                            }
                        }else{
                            *departure_time=945;
                            *arrival_time=1075;
                        }
                    }else{
                        *departure_time=840;
                        *arrival_time=968;
                    }
                }else{
                    *departure_time=767;
                    *arrival_time=900;
                }
            }else{
                *departure_time=679;
                *arrival_time=91;
            }
        }else{
            *departure_time=583;
            *arrival_time=712;
        }
    }else{
        *departure_time=480;
        *arrival_time=616;
    }
}

int main()
{
    int ore, minuti, minutaggio;
    int tempopartenza, tempoarrivo;
    printf("Inserisci un orario nel formato 24 ore (xx:xx): ");
    scanf("%d:%d", &ore, &minuti);
    minutaggio=(ore*60)+minuti;
    find_closest_flight(minutaggio, &tempopartenza, &tempoarrivo);
    if(tempopartenza==1305 && tempoarrivo==718)
    {
        printf("Orario di partenza: 9:45 PM\n");
        printf("Orario di arrivo: 11:58 PM\n");
    }else{
        if(tempopartenza==1140 && tempoarrivo==1280)
        {
            printf("Orario di partenza: 7:00 PM\n");
            printf("Orario di arrivo: 9:20 PM\n");
        }else{
            if(tempopartenza==945 && tempoarrivo==1075)
            {
                printf("Orario di partenza: 3:45 PM\n");
                printf("Orario di arrivo: 5:55 PM\n");
            }else{
                if(tempopartenza==840 && tempoarrivo==968)
                {
                    printf("Orario di partenza: 2:00 PM\n");
                    printf("Orario di arrivo: 4:08 PM\n");
                }else{
                    if(tempopartenza==767 && tempoarrivo==900)
                    {
                        printf("Orario di partenza: 12:47 PM\n");
                        printf("Orario di arrivo: 3:00 PM\n");
                    }else{
                        if(tempopartenza==679 && tempoarrivo==91)
                        {
                            printf("Orario di partenza: 11:19 AM\n");
                            printf("Orario di arrivo: 1:31 AM\n");
                        }else{
                            if(tempopartenza==583 && tempoarrivo==712)
                            {
                                printf("Orario di partenza: 9:43 AM\n");
                                printf("Orario di arrivo: 11:52 AM\n");
                            }else{
                                if(tempopartenza==480 && tempoarrivo==616)
                                {
                                    printf("Orario di partenza: 8:00 AM\n");
                                    printf("Orario di arrivo: 10:16 AM\n");
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
