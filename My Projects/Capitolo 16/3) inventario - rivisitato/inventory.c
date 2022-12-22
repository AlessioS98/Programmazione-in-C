#include <stdio.h>
#include "readline.h"
#include <stdbool.h>
#include <string.h>
#define NAME_LEN 25
#define MAX_PARTS 100

struct part{
    int number;
    char name[NAME_LEN+1];
    int on_hand;
};
bool fermo=false;
int find_part(int number, struct part inventory[], int num_parts);
struct part insert(int *num_parts, struct part inventory[]);
void search(struct part inventory[], int num_parts);
int update(struct part inventory[], int num_parts, int *indice);
void print(int num_parts, struct part inventory[]);

int main()
{
    struct part inventory[MAX_PARTS];
    int num_parts=0;
    struct part materiale;
    int incremento;
    int index=0;
    char code;
    for(;;)
    {
        printf("Inserisci un codice operazione: ");
        scanf("%c", &code);
        switch(code)
        {
            case 'i': materiale=insert(&num_parts, inventory);
                      if(fermo==true)
                      {
                          break;
                      }else{
                          inventory[num_parts-1].number=materiale.number;
                          strcpy(inventory[num_parts-1].name, materiale.name);
                          inventory[num_parts-1].on_hand=materiale.on_hand;
                          fermo=false;
                          break;
                      }
            case 's': search(inventory, num_parts);
                      break;
            case 'u': incremento=update(inventory, num_parts, &index);
                      if(incremento==1)
                      {
                          break;
                      }else{
                          inventory[index].on_hand=inventory[index].on_hand+incremento;
                          break;
                      }
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

struct part insert(int *num_parts, struct part inventory[])
{
    int part_number;
    struct part newmaterial;
    if(*num_parts==MAX_PARTS)
    {
        printf("Il Database e' pieno, non puoi aggiungere altri componenti.\n");
        fermo=true;
        return newmaterial;
    }
    printf("Inserisci numero componente: ");
    scanf("%d", &part_number);
    if(find_part(part_number, inventory, *num_parts)>=0)
    {
        printf("Componente gia' esistente.\n");
        fermo=true;
        return newmaterial;
    }
    newmaterial.number=part_number;
    printf("Inserisci il nome del componente: ");
    read_line(newmaterial.name, NAME_LEN);
    printf("Inserisci quantita' componente: ");
    scanf("%d", &newmaterial.on_hand);
    *num_parts=*num_parts+1;
    return newmaterial;
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

int update(struct part inventory[], int num_parts, int *indice)
{
    int i, number, change;
    printf("Inserisci numero componente: ");
    scanf("%d", &number);
    i=find_part(number, inventory, num_parts);
    if(i>=0)
    {
        *indice=i;
        printf("Aggiungi quantita': ");
        scanf("%d", &change);
        return change;
    }else{
        printf("Componente non trovato.\n");
        return 1;
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
