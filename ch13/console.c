#include "../inc/main.h"

int main(int argc, char const *argv[]) {
    while (*++argv != NULL) {
        printf("%s\n", *argv);
    }
    return 0;
}
