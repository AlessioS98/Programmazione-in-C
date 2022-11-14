#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void reverse(char *message)
{
    int ultimo;
    int i;
    i=0;
    do{
        i++;
    }while(*(message+i)!='\0');
    ultimo=i;
    printf("Frase in reverse: ");
    for(i=ultimo; i>=0; i--)
    {
        printf("%c", *(message+i));
    }
}

int main()
{
    char stringa[80];
    printf("Inserire una frase: ");
    gets(stringa);
    reverse(stringa);
    printf("\n");
    return 0;
}
