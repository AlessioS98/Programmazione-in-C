#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool is_palindrome(const char *message)
{
    char reverse[50];
    int j, i, k;
    int ultimo, sostegno;
    ultimo=0;
    for(i=0; *(message+i)!='\0'; i++)
    {
        ultimo++;
    }
    sostegno=ultimo;
    for(j=0; ultimo>=0; j++)
    {
        reverse[j]=*(message+ultimo);
        ultimo--;
    }
    for(k=sostegno+1; k<50; k++)
    {
        reverse[k]='\0';
    }
    for(j=0; j<50; j++)
    {
        if(reverse[j]==*(message+j))
        {
            continue;
        }else{
            return true;
        }
    }
    return false;
}

int main()
{
    char frase[50];
    int i;
    bool palindromo;
    printf("Inserisci una frase: ");
    gets(frase);
    i=0;
    while(frase[i]!='\0')
    {
        if((frase[i]>='a' && frase[i]<='z') || (frase[i]>='A' && frase[i]<='Z'))
        {
            frase[i]=tolower(frase[i]);
            i++;
        }else{
            continue;
        }
    }
    palindromo=is_palindrome(frase);
    if(palindromo==true)
    {
        printf("Non e' palindromo\n");
    }else{
        printf("E' palindromo\n");
    }
    return 0;
}
