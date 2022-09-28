#include <stdio.h>
#include <stdlib.h>

void create_magic_square(int n, char magic_square[n][n])
{
    int numero, i, posizione1, j;
    int riga, colonna;
    numero=1;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            magic_square[i][j]=0;
        }
    }
    posizione1=(n-1)/2;
    magic_square[0][posizione1]=numero;
    numero++;
    riga=0;
    colonna=posizione1;
    while(numero<=(n*n))
    {
        riga=riga-1;
        colonna=colonna+1;
        if(riga<0)
        {
            riga=n-1;
            if(colonna<n)
            {
                if(magic_square[riga][colonna]==0)
                {
                    magic_square[riga][colonna]=numero;
                }else{
                    riga=0;
                    colonna=colonna-1;
                    riga=riga+1;
                    magic_square[riga][colonna]=numero;
                }
            }else{
                colonna=0;
                if(magic_square[riga][colonna]==0)
                {
                    magic_square[riga][colonna]=numero;
                }else{
                    riga=0;
                    colonna=n-1;
                    riga=riga+1;
                    magic_square[riga][colonna]=numero;
                }
            }
        }else{
            if(colonna<n)
            {
                if(magic_square[riga][colonna]==0)
                {
                    magic_square[riga][colonna]=numero;
                }else{
                    riga=riga+1;
                    colonna=colonna-1;
                    riga=riga+1;
                    if(riga>=n)
                    {
                        riga=0;
                        magic_square[riga][colonna]=numero;
                    }else{
                        magic_square[riga][colonna]=numero;
                    }
                }
            }else{
                colonna=0;
                if(magic_square[riga][colonna]==0)
                {
                    magic_square[riga][colonna]=numero;
                }else{
                    riga=riga+1;
                    colonna=n-1;
                    riga=riga+1;
                    magic_square[riga][colonna]=numero;
                }
            }
        }
        numero++;
    }
}

void print_magic_square(int n, char magic_square[n][n])
{
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", magic_square[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int dimensione;
    printf("Questo programma crea un quadrato magico di una specifica dimensione.\n");
    printf("La dimensione deve essere un numero dispari compreso tra 1 e 99.\n");
    printf("Inserisci la dimensione del quadrato magico: ");
    scanf("%d", &dimensione);
    int magico[dimensione][dimensione];
    create_magic_square(dimensione, magico);
    print_magic_square(dimensione, magico);
    return 0;
}
