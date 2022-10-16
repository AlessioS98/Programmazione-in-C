#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char smallest_word[21];
    char largest_word[21];
    char parola[21];
    printf("Inserisci parola: ");
    gets(parola);
    strcpy(smallest_word, parola);
    strcpy(largest_word, parola);
    while(strlen(parola)!=4)
    {
        printf("Inserisci parola: ");
        gets(parola);
        if(strcmp(parola, smallest_word)<0)
        {
            strcpy(smallest_word, parola);
        }else{
            if(strcmp(parola, largest_word)>0)
            {
                strcpy(largest_word, parola);
            }
        }
    }
    printf("Parola piu' lunga: %s\n", largest_word);
    printf("Parola piu' corta: %s\n", smallest_word);
    return 0;
}
