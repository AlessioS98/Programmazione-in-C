#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void encrypt(char *message, int shift)
{
    int i, cont;
    cont=0;
    for(i=0; *(message+i)!='\0'; i++)
    {
        cont++;
    }
    for(i=0; i<cont; i++)
    {
        if(*(message+i)>='A' && *(message+i)<='Z')
        {
            *(message+i)=((*(message+i)-'A')+shift)%26+'A';
        }else{
            if(*(message+i)>='a' && *(message+i)<='z')
            {
                *(message+i)=((*(message+i)-'a')+shift)%26+'a';
            }else{
                continue;
            }
        }
    }
    printf("Frase criptata: ");
    for(i=0; i<cont; i++)
    {
        printf("%c", *(message+i));
    }
    printf("\n");
}

int main()
{
    int spaziatura;
    char frase[80];
    printf("Inserisci una frase da criptare: ");
    gets(frase);
    printf("Inserisci uno shift (1-25): ");
    scanf("%d", &spaziatura);
    encrypt(frase, spaziatura);
    return 0;
}
