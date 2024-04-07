#include <stdio.h>

int main () {

    int A[]= {3,5,6,8,4,7,8,5,3,1};
    int B[]= {3,4,6,8,9,1,2,3,0,9};

    printf("%d\n", (A[3] % (B[2]/2)) );
    printf("%d\n", (B[A[1]] - A[9]) );
    printf("%d\n", (A[0] + A[1 + 2]) );
    printf("%d\n", (A[5] + B[5]) );
    printf("%d\n", ((A[3] / B[2])/2) );
}