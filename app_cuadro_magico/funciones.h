#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <stdio.h>                    //para compliar
#define TAMANO_MAX 5                  //gcc funciones.c funciones_prueba.c -o juego
                                      // ./juego

void prueba_tamano();
void prueba_leer();
void prueba_leer_filas();
void prueba_leer_columnas();
void prueba_leer_diagonal1();
void prueba_leer_diagonal2();
//
int tamano_cuadro();
void leer_arreglo(int,int[TAMANO_MAX][TAMANO_MAX]);
int sumar_filas(int,int[TAMANO_MAX][TAMANO_MAX],int,int);
int sumar_columnas(int,int[TAMANO_MAX][TAMANO_MAX],int,int);
int sumar_diagonal1(int,int[TAMANO_MAX][TAMANO_MAX],int,int);
int sumar_diagonal2(int,int[TAMANO_MAX][TAMANO_MAX],int,int);
int repetidos(int, int[TAMANO_MAX][TAMANO_MAX]);

#endif
