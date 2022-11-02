#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double compute_average_word_lenght(const char *sentence)
{
    int contlett;
    int contpar;
    int i;
    contlett=0;
    contpar=0;
    double averege;
    for(i=0; i<50; i++)
    {
        if(*(sentence+i)!=' ' && *(sentence+i)!='\0')
        {
            contlett++;
        }else{
            if(*(sentence+i)==' ')
            {
                contpar++;
            }else{
                break;
            }
        }
    }
    contpar++;
    averege=(double) contlett/contpar;
    return averege;
}

int main()
{
    char stringa[50];
    double media;
    printf("Inserisci una frase: ");
    gets(stringa);
    media=compute_average_word_lenght(stringa);
    printf("La media della stringa e': %.1lf\n", media);
    return 0;
}
