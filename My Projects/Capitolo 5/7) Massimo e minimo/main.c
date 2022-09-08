#include <stdio.h>
#include <stdlib.h>

int main()
{
    float primo, secondo, terzo, quarto;
    float massimo, minimo;
    printf("Inserisci quattro numeri: ");
    scanf("%f %f %f %f", &primo, &secondo, &terzo, &quarto);
    if(primo>=secondo && primo>=terzo && primo>=quarto)
    {
        massimo=primo;
    }else{
        if(secondo>=primo && secondo>=terzo && secondo>=quarto)
        {
            massimo=secondo;
        }else{
            if(terzo>=primo && terzo>=secondo && terzo>=quarto)
            {
                massimo=terzo;
            }else{
                massimo=quarto;
            }
        }
    }
    if(primo<=secondo && primo<=terzo && primo<=quarto)
    {
        minimo=primo;
    }else{
        if(secondo<=primo && secondo<=terzo && secondo<=quarto)
        {
            minimo=secondo;
        }else{
            if(terzo<=primo && terzo<=secondo && terzo<=quarto)
            {
                minimo=terzo;
            }else{
                minimo=quarto;
            }
        }
    }
    printf("Il numero massimo e': %.2f\n", massimo);
    printf("Il numero minimo e': %.2f\n", minimo);
}
