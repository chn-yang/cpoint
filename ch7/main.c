#include <stdio.h>
#include "../inc/func.h"

void binary_to_ascii(unsigned int n) {
    unsigned int quotient;
    quotient = n / 10;
    if (quotient != 0) {
        binary_to_ascii(quotient);
    }
    printf("%d\n", n % 10);
}

int main(int argc, char const *argv[]) {
    binary_to_ascii(9527);
    return 0;
}
