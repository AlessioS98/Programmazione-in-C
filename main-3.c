#include <stdio.h>
#include <string.h>

int main()
{
    char somma[50];
    char addendo[10];
    int i, j, k;
    int numero, addizione;
    addizione=0;
    k=0;
    gets(somma);
    for(i=4; i<50; i++)
    {
        if(somma[i]=='\0')
        {
            break;
        }else{
            if(somma[i]!=' ')
            {
                addendo[k++]=somma[i];
            }else{
                numero=atoi(addendo);
                addizione=addizione+numero;
                for(j=0; j<10; j++)
                {
                    addendo[j]='\0';
                }
                k=0;
            }
        }
    }
    printf("La somma totale e': %d\n", addizione);
    return 0;
}
