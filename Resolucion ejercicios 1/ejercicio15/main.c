#include <stdio.h>
#include <stdlib.h>

int main()
{
    int adeuda;
    int cumplio;

    scanf("%d %d", &adeuda, &cumplio);
    if(adeuda > cumplio)
    {
        printf("\nInhabilitado");
    }
    else
    {
        printf("\nHabilitado");
    }
    return 0;
}
