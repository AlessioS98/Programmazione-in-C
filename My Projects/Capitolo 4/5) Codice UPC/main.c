#include <stdio.h>
#include <stdlib.h>

int main()
{
    int uno, due, tre, quattro, cinque, sei, sette, otto, nove, dieci, undici;
    int primasomma, secondasomma, somma1, sottr1, resto, risultato;
    printf("Inserire le prime undici cifre del codice UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &uno, &due, &tre, &quattro, &cinque, &sei, &sette, &otto, &nove, &dieci, &undici);
    primasomma=uno+tre+cinque+sette+nove+undici;
    secondasomma=due+quattro+sei+otto+dieci;
    somma1=(primasomma*3)+secondasomma;
    sottr1=--somma1;
    resto=sottr1%10;
    risultato=9-resto;
    printf("La cifra di controllo e': %d\n", risultato);
    return 0;
}
