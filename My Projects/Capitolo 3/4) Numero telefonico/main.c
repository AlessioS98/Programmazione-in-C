#include <stdio.h>
#include <stdlib.h>

int main()
{
    int parentesi, primo, secondo;
    printf("Inserire un numero telefonico: [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &parentesi, &primo, &secondo);
    printf("Hai inserito %d.%d.%d\n", parentesi, primo, secondo);
    return 0;
}
