#include <stdio.h>
#include <string.h>

int main () {
    int longitud;
    char word1 [20];
    char word2[100];
    char palabra[1000];

    printf("ingresa una palabra\n");
    scanf("%s", word1);

    printf("ingresa una palabra\n");
    scanf("%s", word2);

    longitud = strlen (word1);

    for (int i = 0; i < longitud; i++) {
        strcat(palabra, word2);
        
    }
    printf("%s %s\n", word1, palabra);
    /*strcat(destino, origen);
    printf("destino  %s\n", destino);*/
    return 0;
}
