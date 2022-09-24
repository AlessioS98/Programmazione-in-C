#include <stdio.h>
#include <stdlib.h>

int main()
{
    char frase[15];
    char numerica[15];
    int i, j;
    char ch;
    printf("Inserisci un numero di telefono alfanumerico (max 15 caratteri): ");
    ch=getchar();
    j=0;
    for(i=0; i<15; i++)
    {
        if(ch!='\n')
        {
            frase[i]=ch;
            ch=getchar();
            j++;
        }else{
            break;
        }
    }
    for(i=0; i<15; i++)
    {
        if(frase[i]=='A' || frase[i]=='B' || frase[i]=='C')
        {
            numerica[i]='2';
        }else{
            if(frase[i]=='D' || frase[i]=='E' || frase[i]=='F')
            {
                numerica[i]='3';
            }else{
                if(frase[i]=='G' || frase[i]=='H' || frase[i]=='I')
                {
                    numerica[i]='4';
                }else{
                    if(frase[i]=='J' || frase[i]=='K' || frase[i]=='L')
                    {
                        numerica[i]='5';
                    }else{
                        if(frase[i]=='M' || frase[i]=='N' || frase[i]=='O')
                        {
                            numerica[i]='6';
                        }else{
                            if(frase[i]=='P' || frase[i]=='R' || frase[i]=='S')
                            {
                                numerica[i]='7';
                            }else{
                                if(frase[i]=='T' || frase[i]=='U' || frase[i]=='V')
                                {
                                    numerica[i]='8';
                                }else{
                                    if(frase[i]=='W' || frase[i]=='X' || frase[i]=='Y')
                                    {
                                        numerica[i]='9';
                                    }else{
                                        numerica[i]=frase[i];
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("Numero telefonico numerico: ");
    for(i=0; i<j; i++)
    {
        printf("%c", numerica[i]);
    }
    printf("\n");
    return 0;
}
