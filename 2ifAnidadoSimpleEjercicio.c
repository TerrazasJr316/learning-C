#include <stdio.h>

int main () {

    int anti;
    int sueldo;
    printf("Ingresa tus anios de trabajo \n");
    scanf("%d", &anti);
    printf("Ingresa tu salario \n");
    scanf("%d", &sueldo);
    int por = sueldo * .1;

    if (anti >= 5){
        printf("Tus anios trabajados son aceptados \n");
        if (por >= 1000){
            printf ("eres sujeto a un credito hipotecario \n");
        }
    }
    return 0;
}