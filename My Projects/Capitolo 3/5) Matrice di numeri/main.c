#include <stdio.h>
#include <stdlib.h>

int main()
{
    int uno, due, tre, quattro, cinque, sei, sette, otto, nove, dieci, undici, dodici, tredici, quattordici, quindici, sedici;
    int primariga, secondariga, terzariga, quartariga;
    int primacolonna, secondacolonna, terzacolonna, quartacolonna;
    int primadiagonale, secondadiagonale;
    printf("Inserire i numeri da 1 a 16 in un ordine qualsiasi: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &uno, &due, &tre, &quattro, &cinque, &sei, &sette, &otto, &nove, &dieci, &undici, &dodici, &tredici, &quattordici, &quindici, &sedici);
    primariga=uno+due+tre+quattro;
    secondariga=cinque+sei+sette+otto;
    terzariga=nove+dieci+undici+dodici;
    quartariga=tredici+quattordici+quindici+sedici;
    primacolonna=uno+cinque+nove+tredici;
    secondacolonna=due+sei+dieci+quattordici;
    terzacolonna=tre+sette+undici+quindici;
    quartacolonna=quattro+otto+dodici+sedici;
    primadiagonale=uno+sei+undici+sedici;
    secondadiagonale=quattro+sette+dieci+tredici;
    printf("%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n\n", uno, due, tre, quattro, cinque, sei, sette, otto, nove, dieci, undici, dodici, tredici, quattordici, quindici, sedici);
    printf("Somma delle righe: %d %d %d %d\n", primariga, secondariga, terzariga, quartariga);
    printf("Somma delle colonne: %d %d %d %d\n", primacolonna, secondacolonna, terzacolonna, quartacolonna);
    printf("Somma delle diagonali: %d %d\n", primadiagonale, secondadiagonale);
    return 0;
}
