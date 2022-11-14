#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool is_palindrome(const char *message)
{
   char reverse[50];
   int i, j, len;
   len=0;
   for(i=0; i<50; i++)
   {
       if(*(message+i)!='\0')
       {
           len++;
       }else{
           break;
       }
   }
   for(j=0; len>0; j++)
   {
       reverse[j]=*(message+len-1);
       len--;
   }
   for(i=0; i<len; i++)
   {
       if(reverse[i]==*(message+i))
       {
           continue;
       }else{
           return false;
       }
   }
   return true;
}

int main()
{
    char frase[50];
    int i, j, lunghezza;
    bool palindromo;
    printf("Inserisci una frase: ");
    gets(frase);
    lunghezza=strlen(frase);
    for(j=0; j<lunghezza; j++)
    {
        if(frase[j]>='A' && frase[j]<='Z')
        {
            frase[j]=tolower(frase[j]);
        }else{
            continue;
        }
    }
    palindromo=is_palindrome(frase);
    if(palindromo==true)
    {
        printf("E' palindromo\n");
    }else{
        printf("Non e' palindromo\n");
    }
    return 0;
}