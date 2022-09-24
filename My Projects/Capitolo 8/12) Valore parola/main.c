#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int frase[26];
    bool finito, termine;
    int j, i;
    int somma;
    char ch;
    somma=0;
    finito=false;
    termine=false;
    printf("Inserisci una parola: ");
    ch=getchar();
    for(i=0; i<26; i++)
    {
        switch (ch)
        {
            case 'a': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case 'b': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case 'c': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case 'd': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case 'e': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case 'f': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case 'g': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case 'h': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case 'i': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case 'j': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case 'k': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case 'l': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case 'm': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case 'n': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case 'o': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case 'p': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case 'q': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case 'r': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case 's': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case 't': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case 'u': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case 'v': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case 'w': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case 'x': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case 'y': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case 'z': frase[i]=toupper(ch);
                      ch=getchar();
                      j++;
                      break;
            case '\n': termine=true;
            default: if(ch>='0' && ch<='9')
                     {
                         finito=true;
                     }else{
                         frase[i]=ch;
                         ch=getchar();
                         j++;
                     }
        }
        if(finito==true || termine==true)
        {
            break;
        }
    }
    if(finito==true)
    {
        printf("Parola inserita non valida!! ERRORE");
    }else{
        printf("Valore della parola: ");
        for(i=0; i<j; i++)
        {
            switch (frase[i])
            {
                case 'A': somma=somma+1;
                          break;
                case 'B': somma=somma+3;
                          break;
                case 'C': somma=somma+3;
                          break;
                case 'D': somma=somma+2;
                          break;
                case 'E': somma=somma+1;
                          break;
                case 'F': somma=somma+4;
                          break;
                case 'G': somma=somma+2;
                          break;
                case 'H': somma=somma+4;
                          break;
                case 'I': somma=somma+1;
                          break;
                case 'J': somma=somma+8;
                          break;
                case 'K': somma=somma+5;
                          break;
                case 'L': somma=somma+1;
                          break;
                case 'M': somma=somma+3;
                          break;
                case 'N': somma=somma+1;
                          break;
                case 'O': somma=somma+1;
                          break;
                case 'P': somma=somma+3;
                          break;
                case 'Q': somma=somma+10;
                          break;
                case 'R': somma=somma+1;
                          break;
                case 'S': somma=somma+1;
                          break;
                case 'T': somma=somma+1;
                          break;
                case 'U': somma=somma+1;
                          break;
                case 'V': somma=somma+4;
                          break;
                case 'W': somma=somma+4;
                          break;
                case 'X': somma=somma+8;
                          break;
                case 'Y': somma=somma+4;
                          break;
                case 'Z': somma=somma+10;
                          break;
            }
        }
        printf("%d\n", somma);
    }
    return 0;
}
