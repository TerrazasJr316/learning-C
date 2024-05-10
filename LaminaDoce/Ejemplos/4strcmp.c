#include <stdio.h>
#include <string.h>

int main () {
    int res;
    char str1[] = "brisas";
    char str2[11] = "para";
    res = strcmp (str1, str2);

    printf("resultado:  %d",res);
    return 0;

}