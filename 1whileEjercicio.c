#include <stdio.h>

int main () {
    int numero = 1;
    int a;
    int b;
    while (numero <= 500) {
        a = numero * numero;
        b = a * numero;
        printf ("%d, %d, %d, \n", numero, a, b);
        numero++;

    } //while
    
printf ("fin");
}