/*Diseñe un algoritmo que, dado un número real que entra como dato, nos indique si está contenido dentro de los 
límites predeterminados. El límite inferior es de 100 y el superior de 200 */

#include <stdio.h>
#define Limite_Inferior 100 
#define Limite_Superior 200 


int main() {
    float Numero=0; //Definimos nuestra variable 

    printf("Introduzca un número: "); 
    scanf("%f", &Numero); 
if (Numero >= Limite_Inferior) {
    if (Numero <= Limite_Superior) {
        printf("Está dentro del intervalo \n"); }
        else 
        printf("Supera el límite máximo \n"); 
        } 
        else 
        printf("No alcanza el límite mínimo \n"); 
    return 0; 
}
