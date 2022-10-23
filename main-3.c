#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char somma[50];
    char addendo[10];
    int i, j, k;
    bool fermo;
    int numero, addizione;
    addizione=0;
    fermo=false;
    gets(somma);
    for(i=6; i<50; i++)
    {
        if(somma[i]=='\0')
        {
            break;
        }else{
            if(somma[i]!=' ')
            {
                for(k=0; k<10; k++)
                {
                    if(addendo[k]!='\0')
                    {
                        fermo=true;
                        break;
                    }
                }
                if(fermo==true)
                {
                    strcat(addendo, somma);
                    fermo=false;
                }else{
                    strcpy(addendo, somma);
                }
            }else{
                numero=atoi(addendo);
                addizione=addizione+numero;
                for(j=0; j<10; j++)
                {
                    addendo[j]='\0';
                }
            }
        }
    }
    printf("La somma totale e': %d\n", addizione);
    return 0;
}
