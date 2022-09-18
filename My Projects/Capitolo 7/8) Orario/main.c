#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Inserisci un orario nel formato 12 ore (xx:yy AM/PM): ");
    ch=getchar();
    printf("Orario inserito: ");
    while(ch!='\n')
    {
        putchar(ch);
        ch=getchar();
    }
    printf("\n");
    return 0;
}
