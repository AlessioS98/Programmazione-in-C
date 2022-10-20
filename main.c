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
    char seme_str[]
    char *rank_code[13];
    char *suit_code[4];
    srand((unsigned) time(NULL));
    printf("Inserisci il numero di carte nella mano: ");
    scanf("%d", &num_card);
    printf("La tua mano:\n");
    while(num_card>0)
    {
        suit=rand()%NUM_SUIT;
    }
    

    return 0;
}
