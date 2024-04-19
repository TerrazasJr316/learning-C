#include <stdio.h>
#include <string.h>

int main () {
    int len, n, i;
    char word[n];
    //char posicion[];

    printf("ingresa una palabra\n");
    scanf("%s", word);
    printf("\n");

    len = strlen(word);

    for (i = 0; i < len; i++) {
        char posicion = word[i];
        printf("posicion [%d] = %c\n", i, posicion);
    }    
        
    printf("\n");
    
    for(int j = i-1; j >= 0; j--){
            char posicion = word[j];
            printf("posicion [%d] = %c\n", j, posicion);
        }
    return 0;

}