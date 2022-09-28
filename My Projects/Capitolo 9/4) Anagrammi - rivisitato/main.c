#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void read_word(int counts[26])
{
    char ch, word[30];
    int i, j;
    int resto;
    printf("Inserisci la parola: ");
    ch=getchar();
    for(i=0; ch!='\n'; i++)
    {
        word[i]=tolower(ch);
        ch=getchar();
        j++;
    }
    for(i=0; i<26; i++)
    {
        counts[i]=0;
    }
    for(i=0; i<j; i++)
    {
        if(word[i]>='a' && word[i]<='z')
        {
            resto=word[i]%97;
            counts[resto]=counts[resto]+1;
        }else{
            continue;
        }
    }
}

bool equals_array(int counts1[26], int counts2[26])
{
    int i;
    bool risposta;
    risposta=true;
    for(i=0; i<26; i++)
    {
        if(counts1[i]==counts2[i])
        {
            continue;
        }else{
            risposta=false;
            break;
        }
    }
    return risposta;
}

int main()
{
    int occorrenze1[26], occorrenze2[26];
    bool anagrammi;
    read_word(occorrenze1);
    read_word(occorrenze2);
    anagrammi=equals_array(occorrenze1, occorrenze2);
    if(anagrammi==true)
    {
        printf("Le parole sono anagrammi\n");
    }else{
        printf("Le parole non sono anagrammi\n");
    }
    return 0;
}
