#include <stdio.h>

int main () {
    double min = 60;
    double hora = 60;
    double dia = 24;
    double anio = 20;
    double seg = anio * hora * dia * min;

    printf ("%f", seg);
    printf ("\n");
}
