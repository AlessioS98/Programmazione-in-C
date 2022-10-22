#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char argomento[50];
    int i, j;
    gets(argomento);
    for(i=49; i>=7; i--)
    {
        if(*(argomento+i)=='\0' || *(argomento+i)!=' ')
        {
            continue;
        }else{
            if(*(argomento+i)==' ')
            {
                for(j=i+1; ; j++)
                {
                    if(*(argomento+j)=='\0' || *(argomento+j)==' ')
                    {
                        printf(" ");
                        break;
                    }else{
                        printf("%c", *(argomento+j));
                    }
                }
            }
        }
    }
    printf("\n");
    return 0;
}