#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaración de variables
    int cantidad;
    float precio;
    float total;

    //entrada de datos
    printf("Ingrese la cantidad: ");
    scanf("%d", &cantidad);
    printf("\nIngrese el precio: ");
    scanf("%f", &precio);

    //calculo costo
    total = cantidad * precio;

    //condicional
    if(total > 100)
    {
        printf("\nEl monto total supera el máximo permitido");
    }
    else
    {
        printf("\nEl monto total es: %f", total);
    }
    return 0;
}
