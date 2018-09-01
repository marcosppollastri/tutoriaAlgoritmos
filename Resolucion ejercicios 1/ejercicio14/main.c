#include <stdio.h>
#include <stdlib.h>

int main()
{
    float inversion;
    float ganancia;
    float factor = 0.15;

    scanf("%f", &inversion);

    if(inversion > 500000)
    {
        factor = 0.20;
    }

    ganancia = inversion * factor;

    printf("\nLa Ganancia es de: %f", ganancia);
    printf("\nfactor: %f", factor);
    return 0;
}
