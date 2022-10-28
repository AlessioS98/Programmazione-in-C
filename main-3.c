#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compute_scrabble_value(const char *word)
{
    int somma;
    somma=0;
    while(*word!='\0')
    {
        switch (*word)
        {
            case 'A': somma++;
                      break;
            case 'E': somma++;
                      break;
            case 'I': somma++;
                      break;
            case 'L': somma++;
                      break;
            case 'N': somma++;
                      break;
            case 'O': somma++;
                      break;
            case 'R': somma++;
                      break;
            case 'S': somma++;
                      break;
            case 'T': somma++;
                      break;
            case 'U': somma++;
                      break;
            case 'D': somma=somma+2;
                      break;
            case 'G': somma=somma+2;
                      break;
            case 'B': somma=somma+3;
                      break;
            case 'C': somma=somma+3;
                      break;
            case 'M': somma=somma+3;
                      break;
            case 'P': somma=somma+3;
                      break;
            case 'F': somma=somma+4;
                      break;
            case 'H': somma=somma+4;
                      break;
            case 'V': somma=somma+4;
                      break;
            case 'W': somma=somma+4;
                      break;
            case 'Y': somma=somma+4;
                      break;
            case 'K': somma=somma+5;
                      break;
            case 'J': somma=somma+8;
                      break;
            case 'X': somma=somma+8;
                      break;
            case 'Q': somma=somma+10;
                      break;
            case 'Z': somma=somma+10;
                      break;
        }
        word=word+1;
    }
    return somma;
}

int main()
{
    char parola[20];
    int punteggio;
    int i;
    printf("Inserisci una parola: ");
    gets(parola);
    for(i=0; i<20; i++)
    {
        if(parola[i]>='a' && parola[i]<='z')
        {
            parola[i]=toupper(parola[i]);
        }
    }
    punteggio=compute_scrabble_value(parola);
    printf("Il valore della parola inserita e': %d\n", punteggio);
    return 0;
}
