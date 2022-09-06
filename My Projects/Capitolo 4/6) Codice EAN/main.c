#include <stdio.h>
#include <stdlib.h>

int main()
{
    int uno, due, tre, quattro, cinque, sei, sette, otto, nove, dieci, undici, dodici;
    int primasomma, secondasomma, somma1, tot, resto, risultato;
    printf("Inserire le prime dodici cifre del codice EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &uno, &due, &tre, &quattro, &cinque, &sei, &sette, &otto, &nove, &dieci, &undici, &dodici);
    primasomma=due+quattro+sei+otto+dieci+dodici;
    secondasomma=uno+tre+cinque+sette+nove+undici;
    somma1=(3*primasomma)+secondasomma;
    tot=--somma1;
    resto=tot%10;
    risultato=9-resto;
    printf("La cifra di controllo e': %d\n", risultato);
    return 0;
}
