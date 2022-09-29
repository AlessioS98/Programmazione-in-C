#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>

int roll_dice(void)
{
    int primonumero, secondonumero, somma;
    primonumero=(rand()%6)+1;
    secondonumero=(rand()%6)+1;
    somma=primonumero+secondonumero;
    return somma;
}

bool play_game(void)
{
    int sum;
    sum=roll_dice();
    if(sum==7 || sum==11)
    {
        printf("Hai rollato: %d\n", sum);
        return true;
    }else{
        if(sum==2 || sum==3 || sum==12)
        {
            printf("Hai rollato: %d\n", sum);
            return false;
        }else{
            int sum2;
            printf("Hai rollato: %d\n", sum);
            printf("Il tuo punto e': %d\n", sum);
            sum2=roll_dice();
            while(sum2!=7 && sum2!=sum)
            {
                sum2=roll_dice();
                printf("Hai rollato: %d\n", sum2);
            }
            if(sum2==7)
            {
                printf("Hai rollato: %d\n", sum2);
                return false;
            }else{
                printf("Hai rollato: %d\n", sum2);
                return true;
            }
        }
    }
}

int main()
{
    bool partita;
    int victory, loses;
    char ricomincio;
    srand(time(NULL));
    victory=0;
    loses=0;
    partita=play_game();
    if(partita==true)
    {
        victory++;
        printf("Hai vinto!\n\n");
    }else{
        loses++;
        printf("Hai perso!\n\n");
    }
    printf("Vuoi giocare ancora? ");
    ricomincio=getchar();
    while(ricomincio=='y')
    {
        ricomincio=getchar();
        partita=play_game();
        if(partita==true)
        {
            victory++;
            printf("Hai vinto!\n\n");
            printf("Vuoi giocare ancora? ");
            ricomincio=getchar();
        }else{
            loses++;
            printf("Hai perso!\n\n");
            printf("Vuoi giocare ancora? ");
            ricomincio=getchar();
        }
    }
    printf("Partite vinte: %d\n", victory);
    printf("Partite perse: %d\n", loses);
    return 0;
}
