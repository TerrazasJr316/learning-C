#include <stdio.h>

int main () {
    int vector [10];
    int i = 0;

    while (i < 10) 
    {
        vector [i] = 10;
        i++;
    }
    i = 0;
    while (i < 10)
    {
        printf ("El valor del vector [%d] = %d\n", i, vector[i]);
        i++;
    }
printf ("fin");
}
