#include "funciones.h"

int main()
{ 
    int tamano=0,numeros[TAMANO_MAX][TAMANO_MAX],numero_repetido=0,validar=0,suma;
    printf("Este programa te hace jugar con un cuadro magico");
    while(tamano==0)
        tamano=tamano_cuadro();
    suma=((tamano*((tamano*tamano)+1))/2);
    printf("La constante magica debera ser de %d ",suma);
    leer_arreglo(tamano,numeros);
    numero_repetido=repetidos(tamano,numeros);
    if(numero_repetido==0)
    {  
    validar = sumar_filas(tamano,numeros,suma,validar)
            | sumar_columnas(tamano,numeros,suma,validar)
            | sumar_diagonal1(tamano,numeros,suma,validar)
            | sumar_diagonal2(tamano,numeros,suma,validar);
        if(validar==0)
            printf("\nFelicidades! Es un cuadro magico");
        else if(validar != 0)
            printf("\nNo es un cuadro magico :( \nIntentalo de nuevo!");
    }
    else
        printf("\nRepetiste un numero, ya no puede ser un cuadro magico :(\n");
    return 0;
}
