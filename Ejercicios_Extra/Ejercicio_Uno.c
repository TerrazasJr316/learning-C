/*Escribir un programa que, dados los lados de un triángulo a, b y c,
indique si es equilátero (tres lados iguales), isósceles (sólo dos lados
iguales) o escaleno (tres lados distintos) y que calcule su área mediante la fórmula de Herón:*/

#include <stdio.h>
#include <math.h>


int main () {

    //se declaran las variables para el algoritmo
    float LadoUno;
    float LadoDos;
    float LadoTres;
    float area;
    float perimetro;
    float areaCuadrado;

    /*
    tambien se puede declarar de la siguiente manera para ahorrar lineas de codigo:
    int LadoUno, LadoDos, LadoTres, area;
    */

    // Hace la presentacion de lo que hara el algoritmo:
    printf("Hare la comparacion para categorizar el tipo de triangulo y te dare su area :)\n");

    //Comineza por preguntar por el valor lado uno:
    printf("Dame el valor de primero lado\n");
    scanf("%f", &LadoUno);

    //Pregunta por el valor del lado dos:
    printf("Dame el valor del segundo lado\n");
    scanf("%f", &LadoDos);

    //Preunta el nombre del tercer valor:
    printf("Dame el valor del tercer lado\n");
    scanf("%f", &LadoTres);

    //Hace la comparacion entre los 3 lados:
    if (LadoUno == LadoDos) {
        if (LadoUno == LadoTres){
            printf("El trianngulo es equilatero\n");
        } else {
            printf("El triangulo es isoseles\n");
        }
    } else if (LadoUno == LadoTres || LadoDos == LadoTres){
                printf("El triangulo es isoseles\n");
            } else {
                printf("El triangulo es escaleno\n");
            }

    //Calculando area:
    perimetro = (LadoUno + LadoDos + LadoTres) / 2;
    areaCuadrado = perimetro * (perimetro - LadoUno) * (perimetro - LadoDos) * (perimetro - LadoTres);
    area = sqrt(areaCuadrado);

    //Salida del area:
    printf("El area del triangulo es %f\n", area);

}