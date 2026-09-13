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

void prueba_leer_filas() 
{  
    int fila,columna,suma,checador=0,tamano=3,numeros[3][3]= 
    {  
        {9,1,6},
        {7,5,3},
        {4,8,2}
    };
    suma=((tamano*((tamano*tamano)+1))/2);
    for(fila=0;fila<tamano;fila++)
    {  
        for(columna=0;columna<tamano;columna++)
        {  
            checador=checador+numeros[fila][columna];
        }
        if(checador!=suma)
        {  
        printf("\nError en la fila %d.",fila+1);
        printf(" La suma es %d no %d",checador,suma);
        }    
        checador=0;
    }
}

void prueba_leer_columnas()
{  
    int fila,columna,suma,checador=0,tamano=3,numeros[3][3]= 
    {  
        {9,1,6},
        {7,5,3},
        {4,8,2}
    };
    suma=((tamano*((tamano*tamano)+1))/2);
    for(columna=0;columna<tamano;columna++)
    {  
        for(fila=0;fila<tamano;fila++)
        {  
            checador=checador+numeros[fila][columna];
        }
            if(checador!=suma)
        {  
        printf("\nError en la columna %d.",columna+1);
        printf(" La suma es %d no %d",checador,suma);
        }    
        checador=0;
    }
}

void prueba_leer_diagonal1()
    {  
    int i,fila,columna,suma,checador=0,tamano=3,numeros[3][3]= 
    {  
        {9,1,6},
        {7,5,3},
        {4,8,2}
    };
    suma=((tamano*((tamano*tamano)+1))/2);
    for(i=0;i<tamano;i++)
    {  
        checador=checador+numeros[i][i];
    }
    if(checador!=suma)
    {  
        printf("\nError en la diagonal 1");
        printf(" La suma es %d no %d",checador,suma);
    }
    }

void prueba_leer_diagonal2()
    {  
    int i,fila,columna,suma,checador=0,tamano=3,numeros[3][3]= 
    {  
        {9,1,6},
        {7,3,5},
        {4,8,2}
    };
    suma=((tamano*((tamano*tamano)+1))/2);
    for(i=0;i<tamano;i++)
    {  
        checador=checador+numeros[i][tamano-i-1];
    }
    if(checador!=suma)
    {  
        printf("\nError en la diagonal 2");
        printf(" La suma es %d no %d",checador,suma);
    }
    }
