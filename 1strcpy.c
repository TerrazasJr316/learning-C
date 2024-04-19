#include <stdio.h>
#include <string.h>

int main () {
    int len;
    char palabra [5000];
    char word1[50];
    char word2[50];
    //char palabra1 {word1[], word2[]};

    //palabra uno

    printf("ingresa una palabra\n");
    scanf("%s", word2);
    printf("\n");

    //segunda palabra
    printf("ingresa otra palabra \n");
    scanf("%s", word1);
    printf("\n");

    strcpy(palabra, word1);
    printf("palabra1:  %s \n", palabra);

    strcpy(palabra, word2);
    printf("palabra2:  %s \n", palabra);
    

    /*strcpy(palabra, word1);
    printf("palabra_1: %s \n", palabra);*/
    return 0;
}