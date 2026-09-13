#include "funciones.h"

void prueba_tamano()
{
    int resultado = 0, suma;
    char tamano = 0;

    printf("\nEscribe '3' para tamanho 3x3");
    printf("\nEscribe '5' para tamanho 5x5");
    printf("\n¿De que tamano sera tu cuadro magico? ");
    scanf(" %c", &tamano);

    if (tamano == '3')
    {
        printf("\nTamano 3x3 seleccionado");
        resultado = 3;
    }
    else if (tamano == '5')
    {
        printf("\nTamano 5x5 seleccionado");
        resultado = 5;
    }
    else
    {
        printf("\nTamano no valido");
    }
    suma=((resultado*((resultado*resultado)+1))/2);
    printf("\nTamaño: %d", resultado);
    printf("\nSuma: %d ", suma);
}

void prueba_leer()
{  
    int i,tamano,numeros[5][5],fila,columna;
    printf("\nFormato: FILA POR FILA");
    tamano=3; // = 5
    printf("\nIngresa los %d numeros del cuadro magico: ", tamano*tamano);
    for(fila=0;fila < tamano;fila++)
    { 
            for(columna=0;columna < tamano;columna++)
            {  
                printf("Posicion [%d][%d]: ", fila+1, columna+1);
                scanf("%d", &numeros[fila][columna]);
            }
    }
}
