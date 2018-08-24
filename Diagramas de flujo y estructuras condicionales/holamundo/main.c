#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;
    printf("Ingrese un numero: \n");
    scanf("%d", &n);
    if((n % 2) == 0)
    {
        printf("Es par");
    }
    else
    {
        printf("Es impar");
    }
    return 0;
}
