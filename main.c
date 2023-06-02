#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"

int main(int argc, char *argv[])
{
    /*Declaramos dos matrices las culés se van a llamar Matriz_A y Matriz_B, la Matriz_A
    almacena todos los datos que se ingresaría en las ecuaciones de los apartados “X”, “Y” y “Z”.
    La Matriz_B guardaría los datos de las igualaciones de las tres ecuaciones; es por lo que la
    matriz A es de 3x3 y la matriz B de 3x1.*/

    float Matriz_A[3][3];
    float Matriz_B[3][1];

    for (int i = 0; i < 3; i++)
    {
        printf("Ingrese X de la %d ecuacion\n", i + 1);
        scanf("%f", &Matriz_A[i][0]);

        printf("Ingrese Y de la %d ecuacion\n", i + 1);
        scanf("%f", &Matriz_A[i][1]);

        printf("Ingrese Z de la %d ecuacion\n", i + 1);
        scanf("%f", &Matriz_A[i][2]);

        printf("Ingrese el valor de igualdad de la %d ecuacion\n", i + 1);
        scanf("%f", &Matriz_B[i][0]);

        system("cls");
    }

    /*El método de Cramer consiste en remplazar la fila de las igualaciones por la fila de la variable 
    que deseamos hallar y todo sobre la determínate de A. Es por esto que lo separamos como funciones de 
    la siguiente manera y primero hallamos la determinante de A.*/

    float Determinante_A = CalculardetA(Matriz_A);
    float X = Calcularx(Matriz_A, Matriz_B, Determinante_A);
    float Y = Calculary(Matriz_A, Matriz_B, Determinante_A);
    float Z = Calcularz(Matriz_A, Matriz_B, Determinante_A);
    Imprimir(X, Y, Z);

    return 0;
}