#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 1024
int main() {
    char buf[SIZE];
    fgets(buf, SIZE, stdin);
    printf("%s\n", buf);

    return 0;
}