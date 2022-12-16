#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
    struct dialog_code{
        char *country;
        int code;
    };
    int prefisso, i;
    bool trovato=false;
    const struct dialog_code country_code[]={{"Argentina", 54}, {"Bangladesh", 880},
        {"Brasile", 55}, {"Burma (Myanmar)", 95}, {"Cina", 86}, {"Colombia", 57},
        {"Congo, Dem. Rep. of", 243}, {"Egitto", 20}, {"Etiopia", 251}, {"Francia", 33},
        {"Germania", 49}, {"India", 91}, {"Indonesia", 62}, {"Iran", 98}, {"Italia", 39},
        {"Giappone", 81}, {"Messico", 52}, {"Nigeria", 234}, {"Pakistan", 92}, {"Filippine", 63},
        {"Polonia", 48}, {"Russia", 7}, {"Sud Africa", 27}, {"Sud Corea", 82}, {"Spagna", 34},
        {"Sudan", 249}, {"Tailandia", 66}, {"Turchia", 90}, {"Ucraina", 380}, {"Regno Unito", 44},
        {"Stati Uniti", 1}, {"Vietnam", 84}
    };
    printf("Inserire un prefisso telefonico: +");
    scanf("%3d", &prefisso);
    for(i=0; i<100; i++)
    {
        if(prefisso==country_code[i].code)
        {
            printf("Nazione di appartenenza: %s\n", country_code[i].country);
            trovato=true;
            break;
        }else{
            continue;
        }
    }
    if(trovato==false)
    {
        printf("Errore: nazione non trovata!!!RIPROVARE\n");
    }
    return 0;
}
