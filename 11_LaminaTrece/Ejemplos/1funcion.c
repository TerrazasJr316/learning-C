/*hay dos forma de pasara los datos a la funicon
por referencia
cuando se declara la variable en los argumentos
*/

//forzar salida inmediata en la funcion en la que se encuentra
#include <stdio.h>

float promedio (float a, float b);

int main() {
    float a = 5, b = 10, prom;
    prom = promedio(a, b);
    printf("El promedio es %2.1f \n", prom);
    return 0;
}

float promedio(float a, float b){
    float prom;
    a = a + 3;
    b = b + 3;
    prom = (a + b)/2;
    return prom;
}
