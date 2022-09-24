#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch, iniziale, cognome[20];
    int i, j;
    printf("Inserisci nome e cognome: ");
    ch=getchar();
    iniziale=ch;
    while(ch!=' ')
    {
        ch=getchar();
    }
    ch=getchar();
    j=0;
    for(i=0; ch!='\n'; i++)
    {
        cognome[i]=ch;
        ch=getchar();
        j++;
    }
    for(i=0; i<j; i++)
    {
        printf("%c", cognome[i]);
    }
    printf(",");
    printf(" ");
    printf("%c.", iniziale);
    return 0;
}
