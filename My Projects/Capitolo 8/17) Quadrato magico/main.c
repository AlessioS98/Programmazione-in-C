#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dimensione, posizione1, numero, riga, colonna;
    int i, j;
    printf("Questo programma crea un quadrato magico di una specifica dimensione.\n");
    printf("La dimensione deve essere un numero dispari compreso tra 1 e 99.\n");
    printf("Inserisci la dimensione del quadrato magico: ");
    scanf("%d", &dimensione);
    numero=1;
    if((dimensione%2)!=0 || dimensione<1 || dimensione>99)
    {
        printf("Il quadrato magico non può essere costruito!! ERRORE\n");
    }else{
        int magico[dimensione][dimensione];
        for(i=0; i<dimensione; i++)
        {
            for(j=0; j<dimensione; j++)
            {
                magico[i][j]=0;
            }
        }
        posizione1=(dimensione-1)/2;
        magico[posizione1][posizione1]=numero;
        numero++;
        riga=posizione1;
        colonna=posizione1;
        while(numero<=(dimensione*dimensione))
        {
            riga=riga-1;
            colonna=colonna+1;
            if(riga<0)
            {
                riga=dimensione-1;
                if(colonna<dimensione)
                {
                    if(magico[riga][colonna]==0)
                    {
                        magico[riga][colonna]=numero;
                    }else{
                        riga=0;
                        colonna=colonna-1;
                        riga=riga+1;
                        magico[riga][colonna]=numero;
                    }
                }else{
                    colonna=0;
                    if(magico[riga][colonna]==0)
                    {
                        magico[riga][colonna]=numero;
                    }else{
                        riga=0;
                        colonna=colonna-1;
                        riga=riga+1;
                        magico[riga][colonna]=numero;
                    }
                }
            }
        }
    }
    return 0;
}
