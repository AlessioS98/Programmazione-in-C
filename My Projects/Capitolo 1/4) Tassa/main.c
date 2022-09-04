#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dollari, tassa, importo;
    printf("Inserire un importo in dollari: $");
    scanf("%f", &dollari);
    tassa=(dollari*5)/100;
    importo=dollari+tassa;
    printf("L'importo tassato e': $%.2f\n", importo);
    return 0;
}
