#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char ch;
    int shift, i, j;
    char frase[80];
    printf("Inserisci una frase da criptare: ");
    ch=getchar();
    for(i=0; ch!='\n'; i++)
    {
        frase[i]=ch;
        ch=getchar();
        j++;
    }
    printf("Inserisci uno shift (1-25): ");
    scanf("%d", &shift);
    for(i=0; i<j; i++)
    {
        if(frase[i]>='A' && frase[i]<='Z')
        {
            frase[i]=((frase[i]-'A')+shift)%26+'A';
        }else{
            if(frase[i]>='a' && frase[i]<='z')
            {
                frase[i]=((frase[i]-'a')+shift)%26+'a';
            }else{
                continue;
            }
        }
    }
    printf("Frase criptata: ");
    for(i=0; i<j; i++)
    {
        printf("%c", frase[i]);
    }
    printf("\n");
    return 0;
}
