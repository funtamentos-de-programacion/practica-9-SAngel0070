#include <stdio.h>


// TODO: (22) Declara un prototipo de una función
//  id: suma
//  @return varible de tipo int
//  @param una matriz
//  @param el número de filas
int suma(int arr[][3], int filas);

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // TODO: (23) Crea una variable llamada resultado  y asigna lo que devuelve la función suma
    // pasa a la función el arreglo y su tamaño
    int resultado = suma(arr, 3);
    
    // TODO: (24) Imprime el resultado
    printf("El resultado de la suma es: %d\n", resultado);
    return 0;
}

int suma(int arr[][3], int filas) {
    int suma_total = 0;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < 3; j++) {
            suma_total += arr[i][j];
        }
    }
    return suma_total;
}
//TODO: (25) Crea la función suma que realiza la suma de todos los elementos de un arreglo
