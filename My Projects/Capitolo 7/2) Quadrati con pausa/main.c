#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, cont;
    char ch;
    printf("Questo programma stampa una tabella di quadrati.\n");
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    cont=0;
    for(i=0; i<=n; i++)
    {
        printf("%10d%10d\n", i, i*i);
        cont++;
        if(cont==24)
        {
            cont=0;
            printf("Premi invio per continuare..");
            ch=getchar();
            while(ch!='\n');
            {
                ch=getchar();
            }
        }
    }
    return 0;
}
