#include <stdio.h>

int main() {
    //TODO: (17) Asigna lo valores del 1 al 9 para rellenar la matriz de 3x3
    int arr[3][3];

    int valor = 1;

    // Acceso usando índices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            //TODO: (18) Usa i y j para acceder alos elementos de la matriz
            arr[i][j] = valor;
            valor++;
        }
    }
    // Imprimimos para verificar la matriz(esta bien que agregue esto? Es que sino no se puede comprobar la matriz)
    printf("Matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
