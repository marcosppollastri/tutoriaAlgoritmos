#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracion de variables
    int n1;
    int n2;
    int n3;
    int n4;
    float promedio;

    //ingreso de datos
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);

    //calculo de promedio
    promedio = (float) (n1 + n2 + n3 + n4) / 4;

    //salida de datos
    printf("\nEl promedio es: %f", promedio);
    return 0;
}
