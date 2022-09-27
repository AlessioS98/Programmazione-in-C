#include <stdio.h>
#include <stdlib.h>

float imposta(float imponibile)
{
    float tassa;
    if(imponibile<=750.00f)
    {
        tassa=(imponibile*1)/100;
    }else{
        if(imponibile>750.00f && imponibile<=2250.00f)
        {
            tassa=7.50f+(imponibile*2)/100;
        }else{
            if(imponibile>2250.00f && imponibile<=3750.00f)
            {
                tassa=37.50f+(imponibile*3)/100;
            }else{
                if(imponibile>3750.00f && imponibile<=5250.00f)
                {
                    tassa=82.50f+(imponibile*4)/100;
                }else{
                    if(imponibile>5250.00f && imponibile<=7000.00f)
                    {
                        tassa=142.50f+(imponibile*5)/100;
                    }else{
                        if(imponibile>7000.00f)
                        {
                            tassa=230.00f+(imponibile*6)/100;
                        }
                    }
                }
            }
        }
    }
    return tassa;
}

int main()
{
    float reddito, surplus;
    printf("Inserisci un reddito imponibile in dollari: $");
    scanf("%f", &reddito);
    surplus=imposta(reddito);
    printf("L'imposta sul reddito e': %.2f\n", surplus);
    return 0;
}
