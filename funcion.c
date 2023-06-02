#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"

float CalculardetA(float Matriz_A[3][3])
{
    float C1 = (1) * ((Matriz_A[1][1] * Matriz_A[2][2]) - (Matriz_A[2][1] * Matriz_A[1][2]));
    float C2 = (-1) * ((Matriz_A[0][1] * Matriz_A[2][2]) - (Matriz_A[2][1] * Matriz_A[0][2]));
    float C3 = (1) * ((Matriz_A[0][1] * Matriz_A[1][2]) - (Matriz_A[1][1] * Matriz_A[0][2]));
    float Determinante_A = ((Matriz_A[0][0] * C1) + (Matriz_A[1][0] * C2) + (Matriz_A[2][0] * C3));
    return Determinante_A;
}

float Calcularx(float Matriz_A[3][3], float Matriz_B[3][1], float Determinante_A)
{
    float C1 = (1) * ((Matriz_A[1][1] * Matriz_A[2][2]) - (Matriz_A[2][1] * Matriz_A[1][2]));
    float C2 = (-1) * ((Matriz_A[0][1] * Matriz_A[2][2]) - (Matriz_A[2][1] * Matriz_A[0][2]));
    float C3 = (1) * ((Matriz_A[0][1] * Matriz_A[1][2]) - (Matriz_A[1][1] * Matriz_A[0][2]));
    float Determinante_X = (Matriz_B[0][0] * C1) + (Matriz_B[1][0] * C2) + (Matriz_B[2][0] * C3);
    float X = Determinante_X / Determinante_A;
    return X;
}

float Calculary(float Matriz_A[3][3], float Matriz_B[3][1], float Determinante_A)
{
    float C1 = (1) * ((Matriz_B[1][0] * Matriz_A[2][2]) - (Matriz_B[2][0] * Matriz_A[1][2]));
    float C2 = (-1) * ((Matriz_B[0][0] * Matriz_A[2][2]) - (Matriz_B[2][0] * Matriz_A[0][2]));
    float C3 = (1) * ((Matriz_B[0][0] * Matriz_A[1][2]) - (Matriz_B[1][0] * Matriz_A[0][2]));
    float Determinante_Y = (Matriz_A[0][0] * C1) + (Matriz_A[1][0] * C2) + (Matriz_A[2][0] * C3);
    float Y = Determinante_Y / Determinante_A;
    return Y;
}

float Calcularz(float Matriz_A[3][3], float Matriz_B[3][1], float Determinante_A)
{
    float C1 = (1) * ((Matriz_A[1][1] * Matriz_B[2][0]) - (Matriz_A[2][1] * Matriz_B[1][0]));
    float C2 = (-1) * ((Matriz_A[0][1] * Matriz_B[2][0]) - (Matriz_A[2][1] * Matriz_B[0][0]));
    float C3 = (1) * ((Matriz_A[0][1] * Matriz_B[1][0]) - (Matriz_A[1][1] * Matriz_B[0][0]));
    float Determinante_Z = (Matriz_A[0][0] * C1) + (Matriz_A[1][0] * C2) + (Matriz_A[2][0] * C3);
    float Z = Determinante_Z / Determinante_A;
    return Z;
}

void Imprimir(float X, float Y, float Z)
{
    printf("x = %.2f\n", X);
    printf("y = %.2f\n", Y);
    printf("z = %.2f\n", Z);
}