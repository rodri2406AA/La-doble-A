#include "funciones.h"

void prueba_tamano()
{
    int resultado = 0;
    char tamano = 0;

    printf("\nEscribe '3' para tamanho 3x3");
    printf("\nEscribe '5' para tamanho 5x5\n");

    scanf(" %c", &tamano);

    if (tamano == '3')
    {
        printf("\nTamanho 3x3 seleccionado");
        resultado = 3;
    }
    else if (tamano == '5')
    {
        printf("\nTamanho 5x5 seleccionado");
        resultado = 5;
    }
    else
    {
        printf("\nTamanho no valido");
    }

    printf("\nResultado: %d\n", resultado);
}