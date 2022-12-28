#include <stdio.h>
#include <stdlib.h>
#include "readline2.h"
#define NAME_LEN 25

struct part{
    int number;
    char name[NAME_LEN+1];
    int on_hand;
    struct part *next;
};
struct part *inventory=NULL;
struct part *find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);
void erase(void);
void erase(void);

int main()
{
    char code;
    for(;;)
    {
        printf("Inserisci un codice operazione: ");
        scanf("%c", &code);
        switch(code)
        {
            case 'i': insert();
                      break;
            case 's': search();
                      break;
            case 'u': update();
                      break;
            case 'p': print();
                      break;
            case 'e': erase();
                      break;
            case 'q': return 0;
            default: printf("Codice inesistente\n");
        }
        printf("\n");
    }
}

struct part *find_part(int number)
{
    struct part *p;
    for(p=inventory; p!=NULL && number>p->number; p=p->next)
    {
        ;
    }
    if(p!=NULL && number==p->number)
    {
        return p;
    }
    return NULL;
}

void insert(void)
{
    struct part *cur, *prev, *new_node;
    new_node=malloc(sizeof(struct part));
    if(new_node==NULL)
    {
        printf("Il Database e' pieno; impossibile aggiungere componenti.\n");
        return;
    }
    printf("Inserisci numero componente: ");
    scanf("%d", &new_node->number);
    for(cur=inventory, prev=NULL; cur!=NULL && new_node->number>cur->number; prev=cur, cur=cur->next)
    {
        ;
    }
     if(cur!=NULL && new_node->number==cur->number)
    {
        printf("Componente gia' esistente.\n");
        free(new_node);
        return;
    }
    printf("Inserisci nome componente: ");
    read_line(new_node->name, NAME_LEN);
    printf("Inserisci quantita' componente: ");
    scanf("%d", &new_node->on_hand);
    new_node->next=cur;
    if(prev==NULL)
    {
        inventory=new_node;
    }else{
        prev->next=new_node;
    }
}

void search(void)
{
    int number;
    struct part *p;
    printf("Inserisci numero componente: ");
    scanf("%d", &number);
    p=find_part(number);
    if(p!=NULL)
    {
        printf("Nome componente: %s\n", p->name);
        printf("Quantita' componente: %d\n", p->on_hand);
    }else{
        printf("Componente non trovato.\n");
    }
}

void update(void)
{
    int number, change;
    struct part *p;
    printf("Inserisci numero componente: ");
    scanf("%d", &number);
    p=find_part(number);
    if(p!=NULL)
    {
        printf("Aggiungi quantita': ");
        scanf("%d", &change);
        p->on_hand+=change;
    }else{
        printf("Componente non trovato.\n");
    }
}

void print(void)
{
    struct part *p;
    printf("Numero componente     Nome componente     Quantita' componente\n");
    for(p=inventory; p!=NULL; p=p->next)
    {
        printf("%7d       %-25s%11d\n", p->number, p->name, p->on_hand);
    }
}

void erase(void)
{
    int number;
    struct part *cur, *prev;
    printf("Inserisci numero componente da eliminare: ");
    scanf("%d", &number);
    for(cur=inventory, prev=NULL; cur!=NULL && cur->number!=number; prev=cur, cur=cur->next)
    {
        ;
    }
    if(cur==NULL)
    {
        printf("Nessun componente trovato da eliminare.\n");
        return;
    }
    if(prev==NULL)
    {
        inventory=inventory->next;
    }else{
        prev->next=cur->next;
    }
    free(cur);
}
