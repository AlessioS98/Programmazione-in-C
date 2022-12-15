#include <stdio.h>
#include "readline.h"
#define NAME_LEN 25
#define MAX_PARTS 100

struct part{
    int number;
    char name[NAME_LEN+1];
    int on_band;
}inventory[MAX_PARTS];
int num_part=0; 
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
            case 'q': return 0;
            default: printf("Codice inesistente\n");
        }
        printf("\n");
    }
}
