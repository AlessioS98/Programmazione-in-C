#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int cont;
    printf("Inserisci una frase: ");
    ch=getchar();
    cont=0;
    while(ch!='\n')
    {
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            cont++;
            ch=getchar();
        }else{
            ch=getchar();
        }
    }
    printf("Il numero di vocali nella frase e': %d\n", cont);
    return 0;
}
