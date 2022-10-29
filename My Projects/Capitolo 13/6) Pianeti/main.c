#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
    char *planets[]={"Mercurio", "Venere", "Terra",
                     "Marte", "Giove", "Saturno",
                     "Urano", "Nettuno", "Plutone",
                     "mercurio", "venere", "terra",
                     "marte", "giove", "saturno",
                     "urano", "nettuno", "plutone"};
    int i, j;
    for(i=1; i<argc; i++)
    {
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
