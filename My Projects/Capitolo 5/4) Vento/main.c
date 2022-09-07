#include <stdio.h>
#include <stdlib.h>

int main()
{
    int velocita;
    printf("Inserisci un valore di velocità del vento (nodi): ");
    scanf("%d", &velocita);
    if(velocita<1)
    {
        printf("Descrizione: Calmo\n");
    }else{
        if(velocita>=1 && velocita<=3)
        {
            printf("Descrizione: Bava di vento\n");
        }else{
            if(velocita>=4 && velocita<=27)
            {
                printf("Descrizione: Brezza\n");
            }else{
                if(velocita>=28 && velocita<=47)
                {
                    printf("Descrizione: Brurrasca\n");
                }else{
                    if(velocita>=48 && velocita<=63)
                    {
                        printf("Descrizione: Tempesta\n");
                    }else{
                        if(velocita>63)
                        {
                            printf("Descrizione: Uragano\n");
                        }
                    }
                }
            }
        }
    }
    return 0;
}

