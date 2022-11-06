#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool are_anagrams(const char *word1, const char *word2)
{
    int cont1, cont2, resto;
    int occorrenze[26];
    int i;
    cont1=0;
    cont2=0;
    for(i=0; *(word1+i)!='\0'; i++)
    {
        cont1++;
    }
    for(i=0; *(word2+i)!='\0'; i++)
    {
        cont2++;
    }
    for(i=0; i<26; i++)
    {
        occorrenze[i]=0;
    }
    for(i=0; i<cont1; i++)
    {
        if(*(word1+i)>='a' && *(word1+i)<='z')
        {
            resto=(*(word1+i))%97;
            occorrenze[resto]=occorrenze[resto]+1;
        }else{
            continue;
        }
    }
    for(i=0; i<cont2; i++)
    {
        if(*(word2+i)>='a' && *(word2+i)<='z')
        {
            resto=(*(word2+i))%97;
            occorrenze[resto]=occorrenze[resto]-1;
        }else{
            continue;
        }
    }
    for(i=0; i<26; i++)
    {
        if(occorrenze[i]==0)
        {
            continue;
        }else{
            return false;
        }
    }
    return true;
}

int main()
{
    int i;
    bool anagrammi;
    char firstword[30], secondword[30];
    printf("Inserisci la prima parola: ");
    gets(firstword);
    printf("Inserisci la seconda parola: ");
    gets(secondword);
    for(i=0; *(firstword+i)!='\0'; i++)
    {
        *(firstword+i)=tolower(*(firstword+i));
    }
    for(i=0; *(secondword+i)!='\0'; i++)
    {
        *(secondword+i)=tolower(*(secondword+i));
    }
    anagrammi=are_anagrams(firstword, secondword);
    if(anagrammi==true)
    {
        printf("Le parole inserite sono anagrammi\n");
    }else{
        printf("Le parole inserite non sono anagrammi\n");
    }
    return 0;
}
