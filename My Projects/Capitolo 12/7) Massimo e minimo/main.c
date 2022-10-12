#include <stdio.h>
#include <stdlib.h>
#define N 10

void max_min(int *number, int n, int *max, int *min)
{
    int i;
    *max=*min=*number;
    for(i=0; i<n; i++)
    {
        if(*(number+i)>*max)
        {
            *max=*(number+i);
        }else{
            if(*(number+i)<*min)
            {
                *min=*(number+i);
            }
        }
    }
}

int main()
{
    int b[N], i, big, small;
    printf("Inserisci %d numeri: ", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &b[i]);
    }
    max_min(b, N, &big, &small);
    printf("Numero massimo: %d\n", big);
    printf("Numero minimo: %d\n", small);
    return 0;
}
