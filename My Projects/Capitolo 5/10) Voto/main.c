#include <stdio.h>
#include <stdlib.h>

int main()
{
    int voto, decina;
    printf("Inserisci un voto numerico: ");
    scanf("%d", &voto);
    decina=voto/10;
    if(voto>100 || voto<0)
    {
        printf("Il voto non e' valido!!\n");
    }else{
        switch (decina)
        {
            case 10: printf("Voto letterale: A\n");
                     break;
            case 9: printf("Voto letterale: A\n");
                     break;
            case 8: printf("Voto letterale: B\n");
                    break;
            case 7: printf("Voto letterale: C\n");
                    break;
            case 6: printf("Voto letterale: D\n");
                    break;
            case 5: printf("Voto letterale: F\n");
                    break;
            case 4: printf("Voto letterale: F\n");
                    break;
            case 3: printf("Voto letterale: F\n");
                    break;
            case 2: printf("Voto letterale: F\n");
                    break;
            case 1: printf("Voto letterale: F\n");
                    break;
            case 0: printf("Voto letterale: F\n");
                    break;
        }
    }
    return 0;
}
