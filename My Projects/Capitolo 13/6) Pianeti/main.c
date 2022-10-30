#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
    int lenght;
    char *planets[]={"Mercurio", "Venere", "Terra",
                     "Marte", "Giove", "Saturno",
                     "Urano", "Nettuno", "Plutone"};
    int i, j, k;
    for(i=1; i<argc; i++)
    {
        lenght=strlen(argv[i]);
        for(k=0; k<lenght; k++)
        {
            if(k==0)
            {
                if(*argv[i]>='a' && *argv[i]<='z')
                {
                    *argv[i]=*(argv[i])-32;
                }
            }else{
                *(argv[i]+k)=tolower(*(argv[i]+k));
            }
        }
        for(j=0; j<NUM_PLANETS; j++)
        {
            if(strcmp(argv[i], planets[j])==0)
            {
                printf("%s e' il pianeta %d\n", argv[i], j+1);
                break;
            }
        }
        if(j==NUM_PLANETS)
        {
            printf("%s non e' un pianeta\n", argv[i]);
        }
    }
    return 0;
}
