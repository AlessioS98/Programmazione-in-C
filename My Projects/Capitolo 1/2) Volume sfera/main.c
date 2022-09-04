#include <stdio.h>
#include <stdlib.h>
#define RAGGIO 10
#define PIGRECO 3.14

int main()
{
    int rcubo;
    float frazione;
    float volume;
    rcubo=RAGGIO*RAGGIO*RAGGIO;
    frazione=4.0f/3.0f;
    volume=frazione*PIGRECO*rcubo;
    printf("Il volume della sfera e': %.2f\n", volume);
    return 0;
}
