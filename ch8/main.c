#include <stdio.h>
#include "../inc/func.h"

int main(int argc, char const *argv[]) {
    int arr[3] = {5, 6, 7};
    printf("%p\n", arr);
    printf("%p\n", &arr[0]);
}
