#include <stdio.h>
#define N 10

int *split(int a[], int *low, int *high)
{
    int part_element=a[(*low)];
    for(;;)
    {
        while((*low)<(*high) && part_element<=a[(*high)])
        {
            (*high)--;
        }
        if((*low)>=(*high))
        {
            break;
        }
        a[(*low)++]=a[(*high)];
        while((*low)<(*high) && a[(*low)]<=part_element)
        {
            (*low)++;
        }
        if((*low)>=(*high))
        {
            break;
        }
        a[(*high)--]=a[(*low)];
        a[(*high)]=part_element;
        return high;
    }
}

void quicksort(int a[], int *low, int *high)
{
    int *middle;
    int menus, plus;
    if(*low>=*high)
    {
        return;
    }else{
        middle=split(a, low, high);
        menus=(*middle)-1;
        plus=(*middle)+1;
        quicksort(a, low, &menus);
        quicksort(a, &plus, high);
    }
}

int main()
{
    int a[N], i;
    int value1, value2;
    printf("Inserisci %d numeri da ordinare: ", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &a[i]);
    }
    value1=0;
    value2=N-1;
    quicksort(a, &value1, &value2);
    printf("Elementi in ordine: ");
    for(i=0; i<N; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}
