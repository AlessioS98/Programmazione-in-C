#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    bool anagrammi;
    char ch, firstword[30], secondword[30];
    int i, j, k, occorrenze[26], resto;
    j=0;
    k=0;
    anagrammi=true;
    printf("Inserisci la prima parola: ");
    ch=getchar();
    for(i=0; ch!='\n'; i++)
    {
        firstword[i]=tolower(ch);
        ch=getchar();
        j++;
    }
    printf("Inserisci la seconda parola: ");
    ch=getchar();
    for(i=0; ch!='\n'; i++)
    {
        secondword[i]=tolower(ch);
        ch=getchar();
        k++;
    }
    for(i=0; i<26; i++)
    {
        occorrenze[i]=0;
    }
    for(i=0; i<j; i++)
    {
        if(firstword[i]>='a' && firstword[i]<='z')
        {
            resto=firstword[i]%97;
            occorrenze[resto]=occorrenze[resto]+1;
        }else{
            continue;
        }
    }
    for(i=0; i<k; i++)
    {
        if(secondword[i]>='a' && secondword[i]<='z')
        {
            resto=secondword[i]%97;
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
            anagrammi=false;
            break;
        }
    }
    if(anagrammi==true)
    {
        printf("Le parole inserite sono anagrammi\n");
    }else{
        printf("Le parole inserite non sono anagrammi\n");
    }
}
