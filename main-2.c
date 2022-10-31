#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char nomecognome[30];
    char iniziale;
    int i;
    bool spazio=false;
    printf("Inserisci nome e cognome: ");
    gets(nomecognome);
    for(i=0; i<30; i++)
    {
        if(i==0)
        {
            iniziale=nomecognome[i];
        }else{
            if(nomecognome[i]==' ')
            {
                spazio=true;
                continue;
            }else{
                if(spazio==true)
                {
                    if(nomecognome[i]=='\0')
                    {
                        printf(", ");
                        break;
                    }else{
                        printf("%c", nomecognome[i]);
                    }
                }
            }
        }
    }
    printf("%c.\n", iniziale);
    return 0;
}
