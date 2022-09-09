#include <stdio.h>
#include <stdlib.h>

int main()
{
    float scambio, commissione;
    printf("Inserisci il valore di scambio: $");
    scanf("%f", &scambio);
    while(scambio!=0)
    {
        if(scambio<2500.00)
        {
            commissione=30+(0.017*scambio);
        }else{
            if(scambio>=2500.00 && scambio<6250.00)
            {
                commissione=56+(0.0066*scambio);
            }else{
                if(scambio>=6250.00 && scambio<20000.00)
                {
                    commissione=76+(0.0034*scambio);
                }else{
                    if(scambio>=20000.00 && scambio<50000.00)
                    {
                        commissione=100+(0.0022*scambio);
                    }else{
                        if(scambio>=50000.00 && scambio<500000.00)
                        {
                            commissione=155+(0.0011*scambio);
                        }else{
                            if(scambio<=500000.00)
                            {
                                commissione=255+(0.0009*scambio);
                            }
                        }
                    }
                }
            }
        }
        printf("La commissione e': %.2f\n", commissione);
        printf("Inserisci il valore di scambio: $");
        scanf("%f", &scambio);
    }
    return 0;
}
