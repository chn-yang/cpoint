#include <stdio.h>
#include <stdlib.h>

/**
 *动态内存分配
 */
int main(int argc, char const *argv[]) {
    int count;
    int *arr;

    scanf("%d\n", &count);
    arr = malloc(count * sizeof(int));

    for (size_t i = 0; i < count; i++) {
        *(arr + i) = i;
    }

    for (size_t i = 0; i < count; i++) {
        printf("%d\n", *(arr + i));
    }

    return 0;
}
