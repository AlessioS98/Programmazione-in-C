#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char parole[30][20];
    char frase[80];
    char terminazione;
    int i, j, k, rimanente;
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
                for(rimanente=j; rimanente<20; rimanente++)
                {
                    parole[k][j]='\0';
                }
                k++;
                cont++;
                j=0;
            }
        }
    }
    for(k=0; k<=cont; k++)
    {
        for(j=0; j<20; j++)
        {
            printf("%c", parole[k][j]);
        }
        printf("\n");
    }
    return 0;
}
