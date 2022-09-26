#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char ch, firstword[30], secondword[30];
    int i, j, k, occorrenze[26];
    j=0;
    k=0;
    printf("Inserisci la prima parola: ");
    ch=getchar();
    for(i=0; ch!='\n'; i++)
    {
        firstword[i]=tolower(ch);
        ch=getchar();
        j++;
    }
    printf("Inserisci la seconda frase: ");
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

    return 0;
}
