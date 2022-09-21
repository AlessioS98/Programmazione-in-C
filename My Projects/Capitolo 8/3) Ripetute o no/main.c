#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    bool digit_seen[10]={false};
    int digit;
    long n;
    int i;
    printf("Inserisci un numero: ");
    scanf("%ld", &n);
    while(n!=0)
    {
        while(n>0)
        {
            digit=n%10;
            if(digit_seen[digit])
            {
                break;
            }
            digit_seen[digit]=true;
            n=n/10;
        }
        if(n>0)
        {
            printf("Cifre ripetute\n");
        }else{
            printf("Nessuna cifra ripetuta\n");
        }
        for(i=0; i<10; i++)
        {
            digit_seen[i]=false;
        }
        printf("Inserisci un numero: ");
        scanf("%ld", &n);
    }
    return 0;
}
