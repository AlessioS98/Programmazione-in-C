#include <stdio.h>
#include <stdlib.h>

int main()
{
    int somma;
    char ch;
    printf("Inserisci la parola: ");
    ch=getchar();
    somma=0;
    while(ch!='\n')
    {
        switch (ch)
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
            case 'a': somma++;
                      break;
            case 'e': somma++;
                      break;
            case 'i': somma++;
                      break;
            case 'l': somma++;
                      break;
            case 'n': somma++;
                      break;
            case 'o': somma++;
                      break;
            case 'r': somma++;
                      break;
            case 's': somma++;
                      break;
            case 't': somma++;
                      break;
            case 'u': somma++;
                      break;
            case 'd': somma=somma+2;
                      break;
            case 'g': somma=somma+2;
                      break;
            case 'b': somma=somma+3;
                      break;
            case 'c': somma=somma+3;
                      break;
            case 'm': somma=somma+3;
                      break;
            case 'p': somma=somma+3;
                      break;
            case 'f': somma=somma+4;
                      break;
            case 'h': somma=somma+4;
                      break;
            case 'v': somma=somma+4;
                      break;
            case 'w': somma=somma+4;
                      break;
            case 'y': somma=somma+4;
                      break;
            case 'k': somma=somma+5;
                      break;
            case 'j': somma=somma+8;
                      break;
            case 'x': somma=somma+8;
                      break;
            case 'q': somma=somma+10;
                      break;
            case 'z': somma=somma+10;
                      break;
        }
        ch=getchar();
    }
    printf("Il valore della somma e': %d", somma);
    return 0;
}
