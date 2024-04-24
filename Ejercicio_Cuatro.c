/*Programe un algoritmo que, dados dos números enteros que entran como datos, indique si uno es divisor del otro.*/#include <stdio.h>
#include <stdio.h>


int main() {
    int Numero1=0, Numero2=0;
    printf("----Problema 2-----\n");
    printf("Introduzca el primer número: ");
    scanf("%i", &Numero1);

    printf("Introduzca el segundo número: ");
    scanf("%i", &Numero2);

    if (Numero1 > Numero2) {
        if (Numero1%Numero2 == 0) {
            printf("Es divisor %i de %i \n", Numero1, Numero2);
        }else
            printf("%i no es divisor de %i \n", Numero2, Numero1);
    } else
        printf("No es divisor porque es mayor %i \n", Numero2);
    
    return 0;
}