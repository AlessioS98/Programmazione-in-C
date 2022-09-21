#include <stdio.h>
#include <stdlib.h>

int main()
{
    char frase[50], ch;
    int j, i;
    j=0;
    printf("Inserisci una frase: ");
    ch=getchar();
    for(i=0; i<50; i++)
    {
        if(ch=='\n')
        {
            break;
        }else{
            frase[i]=ch;
            ch=getchar();
            j++;
        }
    }
    for(i=0; i<j; i++)
    {
        frase[i]=toupper(frase[i]);
        switch (frase[i])
        {
            case 'A': frase[i]='4';
                      break;
            case 'B': frase[i]='8';
                      break;
            case 'E': frase[i]='3';
                      break;
            case 'I': frase[i]='1';
                      break;
            case 'O': frase[i]='0';
                      break;
            case 'S': frase[i]='5';
                      break;
        }
    }
    printf("Frase nella lingua B1FF: ");
    for(i=0; i<j; i++)
    {
        printf("%c", frase[i]);
    }
    printf("!!!!!!!!!!\n");
    return 0;
}
