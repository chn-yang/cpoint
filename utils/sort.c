#include <stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b) { return (*(int*)a - *(int*)b); }

int main() {
    int arr[] = {3, 1, 2};

    qsort(arr, 3, sizeof(arr[0]), compare);

    for (size_t i = 0; i < 3; i++) {
        printf("%d\t", arr[i]);
    }

    printf("\n");
    return 0;
}