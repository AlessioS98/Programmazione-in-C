#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compute_vowel_count(const char *sentence)
{
    int cont;
    int i;
    cont=0;
    for(i=0; *(sentence+i)!='\0'; i++)
    {
        if(*(sentence+i)=='A' || *(sentence+i)=='E' || *(sentence+i)=='I'
        || *(sentence+i)=='O' || *(sentence+i)=='U'
        || *(sentence+i)=='a' || *(sentence+i)=='e' || *(sentence+i)=='i'
        || *(sentence+i)=='o' || *(sentence+i)=='u')
        {
            cont++;
        }else{
            continue;
        }
    }
    return cont;
}

int main()
{
    char stringa[50];
    int vocali;
    printf("Inserisci una frase: ");
    gets(stringa);
    vocali=compute_vowel_count(stringa);
    printf("Le vocali all'interno della frase sono %d\n", vocali);
    return 0;
}

