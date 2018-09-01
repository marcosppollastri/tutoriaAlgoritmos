#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*2 maneras de comentar
    algoritmos y estructuras de datos*/
    //Declaración de variables
    int nota1;
    int nota2;
    int nota3;
    float promedio;

    //Ingreso de notas
    scanf("%d", &nota1);
    scanf("%d", &nota2);
    scanf("%d", &nota3);

    promedio = (float) (nota1 + nota2 + nota3) / 3;

    //Verificar si todas las notas son mayores o iguales a 4
    if(nota1 >= 4 && nota2 >= 4 && nota3 >=4)
    {
        //Verificar si es promocionado o no
        if(promedio >= 7)
        {
            printf("Promocionado\nPromedio: %f", promedio);
        }
        else
        {
            printf("Regular");
        }
    }
    else
    {
        printf("Libre");
    }
    return 0;
}
