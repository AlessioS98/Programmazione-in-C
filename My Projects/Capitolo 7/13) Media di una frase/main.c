#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int contlett, contpar;
    float media;
    printf("Inserisci una frase: ");
    ch=getchar();
    contlett=0;
    contpar=0;
    while(ch!='\n')
    {
        if(ch==' ')
        {
            contpar++;
            ch=getchar();
        }else{
            contlett++;
            ch=getchar();
        }
    }
    contpar++;
    media=(float) contlett/contpar;
    printf("La media della frase e': %.2f\n", media);
    return 0;
}
