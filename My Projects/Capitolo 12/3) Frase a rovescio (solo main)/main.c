#include <stdio.h>
#include <stdlib.h>

int main()
{
    char frase[50], reverse[50], ch;
    int i, j;
    i=0;
    printf("Inserisci una frase: ");
    ch=getchar();
    while(ch!='\n')
    {
        frase[i]=ch;
        ch=getchar();
        i++;
    }
    for(j=0; j<i; j++)
    {
        reverse[j]=*(frase+i-j-1);
    }
    printf("Frase al contrario: ");
    for(j=0; j<i; j++)
    {
        printf("%c", reverse[j]);
    }
    printf("\n");
    return 0;
}
