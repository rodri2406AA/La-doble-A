#include "funciones.h"

int tamano_cuadro()
{  
    int resultado = 0;
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
        printf("\nTamano no valido.");
        printf(" Intentalo de nuevo");
    }
    return resultado;
}

void leer_arreglo(int tamano,int numeros[TAMANO_MAX][TAMANO_MAX])
{  
    int fila,columna;
    printf("\nFormato: FILA POR FILA");
    printf("\nIngresa los %d numeros del cuadro magico: ", tamano*tamano);
    for(fila=0;fila < tamano;fila++)
    { 
            for(columna=0;columna < tamano;columna++)
            {  
                printf("\nPosicion [%d][%d]: ", fila+1, columna+1);
                scanf("%d", &numeros[fila][columna]);
            }
    }
}

int sumar_filas(int tamano,int numeros[TAMANO_MAX][TAMANO_MAX],int suma,int validar)
{
    int fila,columna,checador=0;
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
        validar=1;
        }    
        checador=0;
    }
    return validar;
}

int sumar_columnas(int tamano,int numeros[TAMANO_MAX][TAMANO_MAX],int suma,int validar)
{  
    int fila,columna,checador=0;
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
        validar=1;
        }    
        checador=0;
    }
    return validar;
}

int sumar_diagonal1(int tamano,int numeros[TAMANO_MAX][TAMANO_MAX],int suma,int validar)
{  
    int i,checador=0;
    for(i=0;i<tamano;i++)
    {  
        checador=checador+numeros[i][i];
    }
    if(checador!=suma)
    {  
        printf("\nError en la diagonal 1");
        printf(" La suma es %d no %d",checador,suma);
        validar=1;
    }
    return validar;
}

int sumar_diagonal2(int tamano,int numeros[TAMANO_MAX][TAMANO_MAX],int suma,int validar)
{ 
    int i,checador=0;
    for(i=0;i<tamano;i++)
    {  
        checador=checador+numeros[i][tamano-i-1];
    }
    if(checador!=suma)
    {  
        printf("\nError en la diagonal 2");
        printf(" La suma es %d no %d",checador,suma);
        validar=1;
    }
    return validar;
}

int repetidos(int tamano,int numeros[TAMANO_MAX][TAMANO_MAX])
{
    int fila,columna,numero,repetidos=0,arreglo_checador[TAMANO_MAX*TAMANO_MAX + 1] = {0};
    for (fila = 0; fila < tamano; fila++)
    {  
        for (columna = 0; columna < tamano; columna++)
        {  
            numero= numeros[fila][columna];
            if(arreglo_checador[numero]==1)
            {
                printf("\nEl %d esta repetido.", numero);
                repetidos = 1;
            }
            {
                arreglo_checador[numero] = 1; 
            }
        }
    }
    return repetidos;
}

