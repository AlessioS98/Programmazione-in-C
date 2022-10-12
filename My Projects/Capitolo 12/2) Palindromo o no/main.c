#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

void palindromo(char *carattere, int numero)
{
    bool stop;
    char reverse[numero];
    int j;
    stop=false;
    carattere=carattere+(numero-1);
    for(j=0; j<numero; j++)
    {
        reverse[j]=*carattere;
        carattere--;
    }
    carattere++;
    for(j=0; j<numero; j++)
    {
        if(reverse[j]==*carattere)
        {
            carattere++;
            continue;
        }else{
            stop=true;
            break;
        }
    }
    if(stop==true)
    {
        printf("Non e' palindromo\n");
    }else{
        printf("Palindromo\n");
    }
}

int main()
{
    char frase[50];
    int i;
    char ch;
    printf("Inserisci una frase: ");
    ch=getchar();
    i=0;
    while(ch!='\n')
    {
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        {
            frase[i]=tolower(ch);
            ch=getchar();
            i++;
        }else{
            ch=getchar();
        }
    }
    palindromo(frase, i);
    return 0;
}
