#include <stdio.h>
#include <stdlib.h>

int main()
{
    int uno, due, tre, quattro, cinque, sei, sette, otto, nove, dieci, undici, check;
    int primasomma, secondasomma, op1, tot, resto, risultato;
    printf("Inserisci la prima cifra del cosice UPC: ");
    scanf("%d", &uno);
    printf("Inserisci il primo gruppo di cinque numeri del codice UPC: ");
    scanf("%1d%1d%1d%1d%1d", &due, &tre, &quattro, &cinque, &sei);
    printf("Inserisci il secondo gruppo di cinque numeri del codice UPC: ");
    scanf("%1d%1d%1d%1d%1d", &sette, &otto, &nove, &dieci, &undici);
    printf("Inserisci il numero di controllo: ");
    scanf("%d", &check);
    primasomma=uno+tre+cinque+sette+nove+undici;
    secondasomma=due+quattro+sei+otto+dieci;
    op1=(primasomma*3)+secondasomma;
    tot=--op1;
    resto=tot%10;
    risultato=9-resto;
    if(check==risultato)
    {
        printf("Il codice e' VALIDO\n");
    }else{
        printf("Il codice e' NON VALIDO!!! ERRORE\n");
    }
    return 0;
}
