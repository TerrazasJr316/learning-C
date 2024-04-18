#include <stdio.h>

int main () {

    int HST;
    int PH;
    int SS = 1;

    printf("Ingresa las horas trabajadas:\n");
    scanf("%d", &HST);
    printf("Ingresa tu salario por hora:\n");
    scanf("%d", &PH);
    
    if (HST <= 40){
        SS = HST * 40;
        printf("Tus horas semanales son menor a 40 hrs tu salario sera de: %d\n",SS);
    } else if (HST > 40){
            SS = (40 * PH + (PH * 1.5 *(HST-40)));
            printf("Tus horas semanales son mayor a 40 hrs tu salario sera de: %d\n",SS);
    }
}
