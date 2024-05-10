#include <stdio.h>

int main() {
    int numero, suma = 0;

    printf("Ingresa un número: ");
    scanf("%d", &numero);
    
    for (int i = 1; i <= numero; i++) {
        suma += i;
    }

    printf("La suma de todos los números de 1 hasta %d es: %d\n", numero, suma);

    return 0;
}