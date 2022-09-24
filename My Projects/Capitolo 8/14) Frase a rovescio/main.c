#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j, i, k, cont;
    char frase[50];
    char terminazione;
    char ch;
    printf("Inserisci una frase: ");
    ch=getchar();
    j=0;
    for(i=0; ch!='\n'; i++)
    {
        if(ch=='.' || ch=='?' || ch=='!')
        {
            terminazione=ch;
            ch=getchar();
        }else{
            frase[i]=ch;
            ch=getchar();
            j++;
        }
    }
    cont=0;
    for(j=j-1; j>=0; j--)
    {
        if(frase[j]==' ' || j==0)
        {
            if(j==0)
            {
                for(k=j; cont>=0; k++)
                {
                    printf("%c", frase[k]);
                    cont--;
                }
            }else{
                for(k=j+1; cont>0; k++)
                {
                    printf("%c", frase[k]);
                    cont--;
                }
                printf(" ");
            }
        }else{
            cont++;
        }
    }
    printf("%c\n", terminazione);
    return 0;
}
