#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

void print_result(bool *straight, bool *flush, bool *four, bool *three, int *pairs)
{
    if(*straight==true && *flush==true)
    {
        printf("Straight flush\n");
    }else{
        if(*four==true)
        {
            printf("Four of a kind\n");
        }else{
            if(*three==true && *pairs==true)
            {
                printf("Full house\n");
            }else{
                if(*flush==true)
                {
                    printf("Flush\n");
                }else{
                    if(*straight==true)
                    {
                        printf("Straight\n");
                    }else{
                        if(*three==true)
                        {
                            printf("Three of a kind\n");
                        }else{
                            if(*pairs==2)
                            {
                                printf("Two pairs\n");
                            }else{
                                if(*pairs==1)
                                {
                                    printf("Pair\n");
                                }else{
                                    printf("High card\n");
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("\n\n");
}

void analyze_hand(bool *straight, bool *flush, bool *four, bool *three, int *pairs, int num_in_suit[NUM_SUITS], int num_in_rank[NUM_RANKS])
{
    int num_consec=0;
    int rank, suit;
    *straight=false;
    *flush=false;
    *four=false;
    *three=false;
    *pairs=0;
    for(suit=0; suit<NUM_SUITS; suit++)
    {
        if(num_in_suit[suit]==NUM_CARDS)
        {
            *flush=true;
        }
    }
    rank=0;
    while(num_in_rank[rank]==0)
    {
        rank++;
    }
    for(; rank<NUM_RANKS && num_in_rank[rank]>0; rank++)
    {
        num_consec++;
    }
    if(num_consec==NUM_CARDS)
    {
        *straight=true;
        return;
    }
    for(rank=0; rank<NUM_RANKS; rank++)
    {
        if(num_in_rank[rank]==4)
        {
            *four=true;
        }
        if(num_in_rank[rank]==3)
        {
            *three=true;
        }
        if(num_in_rank[rank]==2)
        {
            *pairs++;
        }
    }
}

void read_cards(int numinrank[NUM_RANKS], int numinsuit[NUM_SUITS])
{
    bool card_exists[NUM_RANKS][NUM_SUITS];
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read=0;
    for(rank=0; rank<NUM_RANKS; rank++)
    {
        numinrank[rank]=0;
        for(suit=0; suit<NUM_SUITS; suit++)
        {
            card_exists[rank][suit]=false;
        }
    }
    for(suit=0; suit<NUM_SUITS; suit++)
    {
        numinsuit[suit]=0;
    }
    while(cards_read<NUM_CARDS)
    {
        bad_card=false;
        printf("Inserisci una carta: ");
        rank_ch=getchar();
        switch(rank_ch)
        {
            case '0': exit(EXIT_SUCCESS);
            case '2': rank=0;
                      break;
            case '3': rank=1;
                      break;
            case '4': rank=2;
                      break;
            case '5': rank=3;
                      break;
            case '6': rank=4;
                      break;
            case '7': rank=5;
                      break;
            case '8': rank=6;
                      break;
            case '9': rank=7;
                      break;
            case 't': case 'T': rank=8;
                                break;
            case 'j': case 'J': rank=9;
                                break;
            case 'q': case 'Q': rank=10;
                                break;
            case 'k': case 'K': rank=11;
                                break;
            case 'a': case 'A': rank=12;
                                break;
            default: bad_card=true;
        }
        suit_ch=getchar();
        switch(suit_ch)
        {
            case 'c': case 'C': suit=0;
                                break;
            case 'd': case 'D': suit=1;
                                break;
            case 'h': case 'H': suit=2;
                                break;
            case 's': case 'S': suit=3;
                                break;
            default: bad_card=true;
        }
        while(ch=getchar()!='\n')
        {
            if(ch!=' ')
            {
                bad_card=true;
            }
        }
        if(bad_card)
        {
            printf("Carta errata, ignorata.\n");
        }else{
            if(card_exists[rank][suit])
            {
                printf("Carta duplicata, ignorata.\n");
            }else{
                numinrank[rank]++;
                numinsuit[suit]++;
                card_exists[rank][suit]=true;
                cards_read++;
            }
        }

    }

}

int main()
{
    int num_in_rank[NUM_RANKS];
    int num_in_suit[NUM_SUITS];
    bool straight, flush, four, three;
    int pairs;
    for(;;)
    {
        read_cards(num_in_rank, num_in_suit);
        analyze_hand(&straight, &flush, &four, &three, &pairs, num_in_suit, num_in_rank);
        print_result(&straight, &flush, &four, &three, &pairs);
    }
    return 0;
}
