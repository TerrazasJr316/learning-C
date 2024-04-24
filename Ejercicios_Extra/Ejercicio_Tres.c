/*Escribe un programa que pida un número entero, y conteste al usuario: “Has
introducido el numero (x), gracias”. */

#include <stdio.h>

int main () {

    int numero;

    printf("Introduce un numero entero: \n");
    scanf("%d", &numero);
    printf("\n");


    printf("Haz introducido el numero: %d, gracias \n", numero);
    return 0;
}
