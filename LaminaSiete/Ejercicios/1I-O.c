#include <stdio.h>

int main () {
    int precio;
    int x;
    int y;
    int z;
    
    /*cual es el error
        puts ("El precio es %d", precio);
        printf ("Es es una cadena")
        scanf ("%f %d %f", x,y,z);
        printf (%d, x);
        scanf ("%d", &x);
    */

   //correccion
    puts ("El precio es \n");
    printf ("Es es una cadena\n");
    scanf ("%d %d %d\n", &x,&y,&z);
    printf ("%d\n", x);
    scanf ("%d\n", &x);
}
