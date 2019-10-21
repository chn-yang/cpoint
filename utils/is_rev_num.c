#include <stdio.h>
#include "inc/func.h"

int main() {
    printf("%d\n", is_rev_num(1234321));
    printf("%d\n", is_rev_num(0));
    printf("%d\n", is_rev_num(1001));
}

//判断是否回文数
int is_rev_num(long n) {
    if (n >= 0 && n < 10) {
        return 1;
    }
    if (n < 0 || n % 10 == 0) {
        return 0;
    }
    int num_len = num_length(n);
    int array[num_len];
    int count = num_len / 2;
    num_explode(n, array, num_len);

    for (int i = 0; i < count; i++) {
        if (array[i] != array[(num_len - (i + 1))]) {
            return 0;
        }
    }
    return 1;
}

//将数字使用模10运算 一个个的变成单个字符存进数组里
void num_explode(long n, int arr[], int len) {
    int i = 0;
    while (n >= 10) {
        arr[i] = n % 10;
        n /= 10;
        i++;
    }
    arr[i] = n % 10;
}

//返回数字字符个数
int num_length(long num) {
    int count;
    for (count = 0; num != 0; num /= 10) {
        count++;
    }
    return count;
}
