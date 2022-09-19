#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch, iniziale;
    printf("Inserisci nome e cognome: ");
    ch=getchar();
    iniziale=ch;
    while(ch!=' ')
    {
        ch=getchar();
    }
    ch=getchar();
    while(ch!='\n')
    {
        putchar(ch);
        ch=getchar();
    }
    printf(", %c.\n", iniziale);
    return 0;
}
