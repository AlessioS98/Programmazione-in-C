#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char *mesi[12]={"Gennaio", "Febbraio", "Marzo", "Aprile", "Maggio",
                    "Giugno", "Luglio", "Agosto", "Settembre", "Ottobre",
                    "Novembre", "Dicembre"};
    int mese, giorno, anno;
    printf("Inserisci una data (mm/gg/aaaa): ");
    scanf("%d/%d/%d", &mese, &giorno, &anno);
    if(mese>12 || giorno<=0 || giorno>31)
    {
        printf("Inserimento errato!!\n");
    }else{
        printf("Hai inserito la data ");
        printf("%s ",*(mesi+mese-1));
        if(giorno>=1 && giorno<=9)
        {
            printf("0");
        }
        printf("%d, ", giorno);
        printf("%d\n", anno);
    }
    return 0;
}