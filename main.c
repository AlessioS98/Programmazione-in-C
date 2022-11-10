#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool>

bool is_palindrome(const char *message)
{
    bool stop;
    char reverse[50];
    int j;
    int ultimo;
    ultimo=0;
    for(i=0; *(message+i)!='\0'; i++)
    {
        
    }
    for(j=0; j<50; j++)
    {
        reverse[j]=*(message+j;
        carattere--;
    }
    carattere++;
    for(j=0; j<numero; j++)
    {
        if(reverse[j]==*carattere)
        {
            carattere++;
            continue;
        }else{
            stop=true;
            break;
        }
    }
    if(stop==true)
    {
        printf("Non e' palindromo\n");
    }else{
        printf("Palindromo\n");
    }
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
    return 0;
}