#include "../inc/func.h"

/**
 * 函数指针
 */
int main(int argc, char const *argv[]) {
    int num = 30;
    int (*pf)(int) = &point_fun;

    printf("%d\n", point_fun(num));
    printf("%d\n", pf(num));
}

int point_fun(int num) { return ++num; }
