#include <stdio.h>
#include <stdlib.h>

int main()
{
    float imposta, reddito;
    printf("Inserire il reddito imponibile: $");
    scanf("%f", &reddito);
    if(reddito<750.00f)
    {
        imposta=(reddito*1)/100;
    }else{
        if(reddito>=750.00f && reddito<2250.00f)
        {
            imposta=7.50f+(reddito*2)/100;
        }else{
            if(reddito>=2250.00f && reddito<3750.00f)
            {
                imposta=37.50f+(reddito*3)/100;
            }else{
                if(reddito>=3750.00f && reddito<5250.00f)
                {
                    imposta=82.50f+(reddito*4)/100;
                }else{
                    if(reddito>=5250.00f && reddito<7000.00f)
                    {
                        imposta=142.50f+(reddito*5)/100;
                    }else{
                        if(reddito>=7000.00f)
                        {
                            imposta=230.00f+(reddito*6)/100;
                        }
                    }
                }
            }
        }
    }
    printf("L'imposta risultante e': %.2f\n", imposta);
    return 0;
}

