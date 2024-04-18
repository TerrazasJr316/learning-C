#include <stdio.h>

int main () {
    int vector [20];
    int i = 0;

    while (i > 20)
    {
        printf("Ingresa un numero entero en la posicion[%d]: \n", i);
        scanf("vector[%d] ", &vector[i]);
        printf ("El valor del vector [%d] = %d\n", i, vector[i]);
        i++;
    } //while
    
printf ("fin");
}
