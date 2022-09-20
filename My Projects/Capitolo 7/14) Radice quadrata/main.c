#include <stdio.h>
#include <stdlib.h>

int main()
{
    double numero, stima, media, mediafin, differenza, valoreassoluto, prodotto;
    printf("Inserisci un numero: ");
    scanf("%lf", &numero);
    stima=1;
    media=numero/stima;
    mediafin=(stima+media)/2;
    differenza=stima-mediafin;
    valoreassoluto=fabs(differenza);
    prodotto=0.00001*stima;
    if(valoreassoluto>prodotto)
    {
        while(valoreassoluto>prodotto)
        {
            stima=mediafin;
            media=numero/stima;
            mediafin=(stima+media)/2;
            differenza=stima-mediafin;
            valoreassoluto=fabs(differenza);
            prodotto=0.00001*stima;
        }
        printf("La radice quadrata e': %.5lf\n", mediafin);
    }else{
        printf("La radice quadrata e': %.5lf\n", mediafin);
    }
    return 0;
}
