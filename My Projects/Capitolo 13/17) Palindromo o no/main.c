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
}

int main()
{
    char frase[50], ch;
    bool palindromo;
    printf("Inserisci una frase: ");
    ch=getchar();
    while(ch!='\n')
    {
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        {
            frase[i]=tolower(ch);
            ch=getchar();
        }else{
            ch=getchar();
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
