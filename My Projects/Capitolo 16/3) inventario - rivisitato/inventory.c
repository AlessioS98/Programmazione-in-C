#include <stdio.h>
#include "readline.h"
#define NAME_LEN 25
#define MAX_PARTS 100

struct part{
        int number;
        char name[NAME_LEN+1];
        int on_hand;
    };
int find_part(int number, struct part inventory[], int num_parts);
void insert(int num_parts, struct part inventory[]);
void search(struct part inventory[], int num_parts);
void update(struct part inventory[], int num_parts);
void print(int num_parts, struct part inventory[]);

int main()
{
    struct part inventory[MAX_PARTS];
    int num_parts=0;
    char code;
    for(;;)
    {
        printf("Inserisci un codice operazione: ");
        scanf("%c", &code);
        switch(code)
        {
            case 'i': insert(num_parts, inventory);
                      break;
            case 's': search(inventory, num_parts);
                      break;
            case 'u': update(inventory, num_parts);
                      break;
            case 'p': print(num_parts, inventory);
                      break;
            case 'q': return 0;
            default: printf("Codice inesistente\n");
        }
        printf("\n");
    }
}

int find_part(int number, struct part inventory[], int num_parts)
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

void insert(int num_parts, struct part inventory[])
{
    int part_number;
    if(num_parts==MAX_PARTS)
    {
        printf("Il Database e' pieno, non puoi aggiungere altri componenti.\n");
        return;
    }
    printf("Inserisci numero componente: ");
    scanf("%d", &part_number);
    if(find_part(part_number, inventory, num_parts)>=0)
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

void search(struct part inventory[], int num_parts)
{
    int i, number;
    printf("Inserisci numero componente: ");
    scanf("%d", &number);
    i=find_part(number, inventory, num_parts);
    if(i>=0)
    {
        printf("Nome componente: %s\n", inventory[i].name);
        printf("Quantita' componente: %d\n", inventory[i].on_hand);
    }else{
        printf("Componente non trovato.\n");
    }
}

void update(struct part inventory[], int num_parts)
{
    int i, number, change;
    printf("Inserisci numero componente: ");
    scanf("%d", &number);
    i=find_part(number, inventory, num_parts);
    if(i>=0)
    {
        printf("Aggiungi quantita': ");
        scanf("%d", &change);
        inventory[i].on_hand+=change;
    }else{
        printf("Componente non trovato.\n");
    }
}

void print(int num_parts, struct part inventory[])
{
    struct part supporto;
    int minimo;
    int i, j, k, indicemin;
    printf("Numero componente     Nome componente     Quantita' componente\n");
    j=0;
    while(j<num_parts)
    {
        minimo=inventory[j].number;
        supporto=inventory[j];
        for(i=j; i<num_parts; i++)
        {
            if(inventory[i].number<minimo)
            {
                minimo=inventory[i].number;
            }else{
                continue;
            }
        }
        for(k=j; k<num_parts; k++)
        {
            if(minimo==inventory[k].number)
            {
                indicemin=k;
                break;
            }
        }
        inventory[j]=inventory[indicemin];
        inventory[indicemin]=supporto;
        j++;
    }
    for(i=0; i<num_parts; i++)
    {
        printf("%7d       %-25s%11d\n", inventory[i].number, inventory[i].name, inventory[i].on_hand);
    }
}
