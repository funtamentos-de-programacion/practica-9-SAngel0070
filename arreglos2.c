#include <stdio.h>

int main(){
    int arr[]= {1, 2, 3, 4, 5};
    int *ptr;
    ptr = arr;

    printf("[ ");
    for(int i =0; i < 5;i++)
        printf("%d, ", *(ptr + i));
    printf(" ]\n");

    //TODO: HACER UN CICLO QUE IMPRIMA DESDE EL TERCER EN ADELANTE USANDO NOTACION DE PUNTEROS
    printf("[ ");
    for(int i =2; i < 5;i++)
        printf("%d, ", *(ptr + i));
    printf(" ]\n");

    return 0;
}
