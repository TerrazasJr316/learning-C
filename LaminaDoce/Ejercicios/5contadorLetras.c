#include <stdio.h>
#include <string.h>

int main() {
    int contador[26] = {0}, n;
    char palabra[100];

    printf("Ingresa una palabra: ");
    scanf("%s", palabra);

    for(int i = 0; palabra[i] != '\0'; i++) {
        if(palabra[i] >= 'A' && palabra[i] <= 'Z') {
            contador[palabra[i] - 'A']++;
        }
        else if(palabra[i] >= 'a' && palabra[i] <= 'z') {
            contador[palabra[i] - 'a']++;
        }
    }

    printf("Ocurrencias de cada letra:\n");
    for(int i = 0; i < 26; i++) {
        if(contador[i] > 0) {
            printf("%c: %d\n", 'a' + i, contador[i]);
        }
    }

    return 0;
}
