#include <stdio.h>
#include <stdlib.h>
#define PIGRECO 3.14

int main()
{
    float raggio;
    int rcubo;
    float frazione;
    float volume;
    printf("Inserire il valore del raggio: ");
    scanf("%f", &raggio);
    rcubo=raggio*raggio*raggio;
    frazione=4.0f/3.0f;
    volume=frazione*PIGRECO*rcubo;
    printf("Il volume della sfera e': %.2f\n", volume);
    return 0;
}
