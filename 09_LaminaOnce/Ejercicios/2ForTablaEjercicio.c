#include <stdio.h>

int main() {
    int A = 3;
    int i, j;

    printf("A\tA + 2\tA + 4\tA + 6\n");

    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", A);
            A += 2;
        }
        A -= 6; 
        A += 3;
        printf("\n");
    }

    return 0;
} 