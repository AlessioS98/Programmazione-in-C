#include <stdio.h>
#include <string.h>
#define MAX_REMIND 50
#define MSG_LEN 60

void read_line(char str[], int n)
{
    char ch;
    int i=0;
    ch=getchar();
    while(ch!='\n')
    {
        if(i<n)
        {
            str[i++]=ch;
            ch=getchar();
        }
    }
    str[i]='\0';
}

int main()
{
    char reminders[MAX_REMIND][MSG_LEN+3];
    char day_str[3], hour_str[3], minute_str[3], mounth_str[3], msg_str[MSG_LEN+1];
    int day, i, j, num_remind=0;
    int mese, giorno, ore, minuti;
    for(;;)
    {
        if(num_remind==MAX_REMIND)
        {
            printf("--PROMEMORIA MASSIMI RAGGIUNTI--\n");
            break;
        }else{
            printf("Inserisci mese/giorno (mm/dd), orario (xx/yy) e il promemoria: ");
            scanf("%2d/%2d %2d:%2d", &mese, &giorno, &ore, &minuti);
            salto:
            if(giorno==0)
            {
                break;
            }else{
                while(mese<1 || mese>12 || giorno<0 || giorno>31)
                {
                    printf("Error: inserimento non valido!!\n");
                    printf("Promemoria ignorato, riprovare\n");
                    printf("Inserisci mese/giorno (mm/dd), orario (xx/yy) e il promemoria: ");
                    scanf("%2d/%2d %2d:%2d", &mese, &giorno, &ore, &minuti);
                    if(giorno==0)
                    {
                        goto salto;
                    }
                }
                sprintf(day_str, "%2d", giorno);
                sprintf(mounth_str, "%2d", mese);
                sprintf(hour_str, "%2d", ore);
                sprintf(minute_str, "%2d", minuti);
                read_line(msg_str, MSG_LEN);
                for(i=0; i<num_remind; i++)
                {
                    if(strcpy(mounth_str, reminders[i])<0)
                    {
                        break;
                    }
                }
                for(j=num_remind; j>i; j--)
                {
                    strcpy(reminders[j], reminders[j-1]);
                }
                strcpy(reminders[i], day_str);
                strcat(reminders[i], msg_str);
                num_remind++;
            }
        }
    }
    printf("\nDay Reminder\n");
    for(i=0; i<num_remind; i++)
    {
        printf("%s\n", reminders[i]);
    }
    return 0;
}
