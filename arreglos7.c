#include <stdio.h>

int main() {
    //TODO: (19) Asigna lo valores del 1 al 9 para rellenar la matriz de 3x3
    int arr[3][3];
    int valor = 1;
    //TODO: (20) Crea un apuntador que apunte al primer elemento de la matriz
    int *ptr = &arr[0][0];

    // Acceso usando índices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            //TODO: (21) Usa la lógica de apuntadores para acceder al arreglo
            *(ptr + (i * 3 + j)) = valor;
            valor++;
        }
    }
    // Imprimimos para verificar otra vez
    printf("Matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}