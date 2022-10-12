#include <stdio.h>
#include <stdlib.h>

void reverse(char *carattere, int numero)
{
    char reverse[numero];
    int j;
    carattere=carattere+(numero-1);
    for(j=0; j<numero; j++)
    {
        reverse[j]=*carattere;
        carattere--;
    }
    for(j=0; j<numero; j++)
    {
        printf("%c", reverse[j]);
    }
    printf("\n");
}

int main()
{
    char frase[50], ch;
    int i;
    i=0;
    printf("Inserisci una frase: ");
    ch=getchar();
    while(ch!='\n')
    {
        frase[i]=ch;
        ch=getchar();
        i++;
    }
    printf("Frase al contrario: ");
    reverse(frase, i);
    return 0;
}
