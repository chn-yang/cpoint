#include <stdio.h>
#include "../inc/func.h"

int str_len(char *string) {
    int i = 0;

    while (*string++ != '\0') {
        i++;
    }
    return i;
}

int str_len2(char string[]) {
    int i = 0;

    while (*string++ != '\0') {
        i++;
    }
    return i;
}

int main(int argc, char const *argv[]) {
    char *str = "fff";
    char string[] = "string";
    int len = str_len(str);
    printf("%d\n", len);
    printf("%d\n", str_len2(string));
    return 0;
}
