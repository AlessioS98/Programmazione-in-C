#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char parole[30][20];
    char frase[80];
    char terminazione;
    int i, j, k, rim, num, pros;
    int cont;
    printf("Inserisci una frase: ");
    gets(frase);
    k=0;
    j=0;
    cont=0;
    for(i=0; i<80; i++)
    {
        if(frase[i]=='?' || frase[i]=='!' || frase[i]=='.')
        {
            terminazione=frase[i];
        }else{
            if(frase[i]!=' ')
            {
                parole[k][j]=frase[i];
                j++;
            }else{
                for(rim=j; rim<20; rim++)
                {
                    parole[k][rim]='\0';
                }
                k++;
                cont++;
                j=0;
            }
        }
    }
    num=strlen(parole[cont]);
    for(pros=num; pros<20; pros++)
    {
        parole[cont][pros]='\0';
    }
    for(k=cont; k>=0; k--)
    {
        printf("%s", parole[k]);
        if(k==0)
        {
            if(terminazione=='?' || terminazione=='!' || terminazione=='.')
            {
                printf("%c", terminazione);
            }
        }
        printf(" ");
    }
    return 0;
}
