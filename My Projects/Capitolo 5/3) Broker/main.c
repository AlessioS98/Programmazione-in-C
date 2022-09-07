#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numazioni;
    float prezzoaz, commissione, valscambio, commissionerivale;
    /*broker originale*/
    printf("Inserisci il numero di azioni: ");
    scanf("%d", &numazioni);
    printf("Inserire il prezzo per ogni azione: $");
    scanf("%f", &prezzoaz);
    valscambio=numazioni*prezzoaz;
    if(valscambio<2500.00f)
    {
        commissione=30.00f+0.017f*valscambio;
    }else{
        if(valscambio<6250.00f)
        {
            commissione=56.00f+0.0066f*valscambio;
        }else{
            if(valscambio<20000.00f)
            {
                commissione=76.00f+0.0034f+valscambio;
            }else{
                if(valscambio<50000.00f)
                {
                    commissione=100.00f+0.0022f*valscambio;
                }else{
                    if(valscambio<500000.00f)
                    {
                        commissione=155.00f+0.0011f*valscambio;
                    }else{
                        commissione=255.00f+0.0009f*valscambio;
                    }
                }
            }
        }
    }
    if(commissione<39.00f)
    {
        commissione=39.00f;
    }
    printf("La commissione del broker originale e': $%.2f\n", commissione);
    /*broker rivale*/
    if(numazioni<2000)
    {
        commissionerivale=numazioni*33.3f;
    }else{
        if(numazioni>=200)
        {
            commissionerivale=numazioni*33.2f;
        }
    }
    printf("La commissione del broker rivale e': $%.2f\n", commissionerivale);
    return 0;
}
