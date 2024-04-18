#include <stdio.h>

int main () {
    int w = 9;
    int x = 3;
    int y = 7;
    int z = -2;

    printf ("%d\n", x < y && w > z);
    printf ("%d\n", x >= w ^ z == y);
    printf ("%d\n", y <= x || x != w);
    printf ("%d\n", w == 9 ^ x == 3);
    printf ("%d\n", y > z && z < x);
    printf ("%d\n", ! w != 9);
}
