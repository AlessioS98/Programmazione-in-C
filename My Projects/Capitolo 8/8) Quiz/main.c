#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrice[5][5];
    int somma1, somma2, somma3, somma4, somma5, i, j;
    float media1, media2, media3, media4, media5;
    somma1=0;
    somma2=0;
    somma3=0;
    somma4=0;
    somma5=0;
    printf("Inserisci il punteggio del primo studente (5 numeri interi): ");
    scanf("%d %d %d %d %d", &matrice[0][0], &matrice[0][1], &matrice[0][2], &matrice[0][3], &matrice[0][4]);
    printf("Inserisci il punteggio del secondo studente (5 numeri interi): ");
    scanf("%d %d %d %d %d", &matrice[1][0], &matrice[1][1], &matrice[1][2], &matrice[1][3], &matrice[1][4]);
    printf("Inserisci il punteggio del terzo studente(5 numeri interi): ");
    scanf("%d %d %d %d %d", &matrice[2][0], &matrice[2][1], &matrice[2][2], &matrice[2][3], &matrice[2][4]);
    printf("Inserisci il punteggio del quarto studente (5 numeri interi): ");
    scanf("%d %d %d %d %d", &matrice[3][0], &matrice[3][1], &matrice[3][2], &matrice[3][3], &matrice[3][4]);
    printf("Inserisci il punteggio del quinto studente (5 numeri interi): ");
    scanf("%d %d %d %d %d", &matrice[4][0], &matrice[4][1], &matrice[4][2], &matrice[4][3], &matrice[4][4]);
    printf("\n");
    printf("Somma dei punteggi: ");
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(i==0)
            {
                somma1=somma1+matrice[i][j];
            }else{
                if(i==1)
                {
                    somma2=somma2+matrice[i][j];
                }else{
                    if(i==2)
                    {
                        somma3=somma3+matrice[i][j];
                    }else{
                        if(i==3)
                        {
                            somma4=somma4+matrice[i][j];
                        }else{
                            somma5=somma5+matrice[i][j];
                        }
                    }
                }
            }
        }
    }
    media1=somma1/5;
    media2=somma2/5;
    media3=somma3/5;
    media4=somma4/5;
    media5=somma5/5;
    printf("%d %d %d %d %d\n", somma1, somma2, somma3, somma4, somma5);
    printf("Media di ogni studente: %.2f %.2f %.2f %.2f %.2f\n", media1, media2, media3, media4, media5);
    return 0;
}
