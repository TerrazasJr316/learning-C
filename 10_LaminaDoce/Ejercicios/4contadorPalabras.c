#include <stdio.h>
#include <string.h>

int main () {
    int res, n;
    char word1[n];
    char word2[n];

    printf("ingresa una palabra\n");
    scanf("%s", word1);
    printf("\n");

    printf("ingresa una palabra\n");
    scanf("%s", word2);
    printf("\n");

    res = strcmp (word1, word2);
    
    printf("resultado: %d",res);
    printf("\n");
    return 0;

}
