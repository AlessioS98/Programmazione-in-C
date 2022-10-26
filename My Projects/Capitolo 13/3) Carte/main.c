#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define NUM_SUIT 4
#define NUM_RANKS 13

int main()
{
    bool in_hand[NUM_SUIT][NUM_RANKS]={false};
    int num_card, rank, suit;
    char *rank_code[13]={"Due", "Tre", "Quattro", "Cinque", "Sei", "Sette", "Otto", "Nove", \
    "Dieci", "J", "Q", "K", "Asso"};
    char *suit_code[4]={"Cuori", "Picche", "Cuori", "Spade"};
    srand((unsigned) time(NULL));
    printf("Inserisci il numero di carte nella mano: ");
    scanf("%d", &num_card);
    printf("La tua mano:\n");
    while(num_card>0)
    {
        suit=rand()%NUM_SUIT;
        rank=rand()%NUM_RANKS;
        if(!in_hand[suit][rank])
        {
            in_hand[suit][rank]=true;
            num_card--;
            printf("%s ", *(rank_code+rank));
            printf("di ");
            printf("%s", *(suit_code+suit));
            printf("\n");
        }
    }
    return 0;
}
