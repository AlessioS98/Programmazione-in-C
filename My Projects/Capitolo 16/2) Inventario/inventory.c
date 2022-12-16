#include <stdio.h>
#include "readline.h"
#define NAME_LEN 25
#define MAX_PARTS 100

struct part{
    int number;
    char name[NAME_LEN+1];
    int on_hand;
}inventory[MAX_PARTS];
int num_parts=0;
int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);

int main()
{
    char code;
    for(;;)
    {
        printf("Inserisci un codice operazione: ");
        code=getchar();
        switch(code)
        {
            case 'i': insert();
                      code=getchar();
                      break;
            case 's': search();
                      code=getchar();
                      break;
            case 'u': update();
                      code=getchar();
                      break;
            case 'p': print();
                      code=getchar();
                      break;
            case 'q': return 0;
            default: printf("Codice inesistente\n");
                     code=getchar();
        }
        printf("\n");
    }
}

int find_part(int number)
{
    int i;
    for(i=0; i<num_parts; i++)
    {
        if(inventory[i].number==number)
        {
            return i;
        }
    }
    return -1;
}

void insert(void)
{
    int part_number;
    if(num_parts==MAX_PARTS)
    {
        printf("Il Database e' pieno, non puoi aggiungere altri componenti.\n");
        return;
    }
    printf("Inserisci numero componente: ");
    scanf("%d", &part_number);
    if(find_part(part_number)>=0)
    {
        printf("Componente gia' esistente.\n");
        return;
    }
    inventory[num_parts].number=part_number;
    printf("Inserisci il nome del componente: ");
    read_line(inventory[num_parts].name, NAME_LEN);
    printf("Inserisci quantita' componente: ");
    scanf("%d", &inventory[num_parts].on_hand);
    num_parts++;
}

void search(void)
{
    int i, number;
    printf("Inserisci numero componente: ");
    scanf("%d", &number);
    i=find_part(number);
    if(i>=0)
    {
        printf("Nome componente: %s\n", inventory[i].name);
        printf("Quantita' componente: %d\n", inventory[i].on_hand);
    }else{
        printf("Componente non trovato.\n");
    }
}

void update(void)
{
    int i, number, change;
    printf("Inserisci numero componente: ");
    scanf("%d", &number);
    i=find_part(number);
    if(i>=0)
    {
        printf("Aggiungi quantita': ");
        scanf("%d", &change);
        inventory[i].on_hand+=change;
    }else{
        printf("Componente non trovato.\n");
    }
}

void print(void)
{
    int i;
    printf("Numero componente     Nome componente     Quantita' componente\n");
    for(i=0; i<num_parts; i++)
    {
        printf("%7d       %-25s%11d\n", inventory[i].number, inventory[i].name, inventory[i].on_hand);
    }
}
