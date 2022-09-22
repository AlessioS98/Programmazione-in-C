#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrice[5][5];
    int somma, i, j;
    printf("Inserisci la prima riga di numeri (5 numeri interi): ");
    scanf("%d %d %d %d %d", &matrice[0][0], &matrice[0][1], &matrice[0][2], &matrice[0][3], &matrice[0][4]);
    printf("Inserisci la seconda riga di numeri (5 numeri interi): ");
    scanf("%d %d %d %d %d", &matrice[1][0], &matrice[1][1], &matrice[1][2], &matrice[1][3], &matrice[1][4]);
    printf("Inserisci la terza riga di numeri (5 numeri interi): ");
    scanf("%d %d %d %d %d", &matrice[2][0], &matrice[2][1], &matrice[2][2], &matrice[2][3], &matrice[2][4]);
    printf("Inserisci la quarta riga di numeri (5 numeri interi): ");
    scanf("%d %d %d %d %d", &matrice[3][0], &matrice[3][1], &matrice[3][2], &matrice[3][3], &matrice[3][4]);
    printf("Inserisci la quinta riga di numeri (5 numeri interi): ");
    scanf("%d %d %d %d %d", &matrice[4][0], &matrice[4][1], &matrice[4][2], &matrice[4][3], &matrice[4][4]);
    printf("\n");
    printf("Somma delle righe: ");
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            somma=somma+matrice[i][j];
        }
        printf("%d ", somma);
        somma=0;
    }
    printf("\n");
    printf("Somma delle colonne: ");
    for(j=0; j<5; j++)
    {
        for(i=0; i<5; i++)
        {
            somma=somma+matrice[i][j];
        }
        printf("%d ", somma);
        somma=0;
    }
    printf("\n");
    return 0;
}
