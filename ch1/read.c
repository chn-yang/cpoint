#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Length 20
#define MAX_INPUT 1000

int read_column_numbers(int columns[], int max);
void rearrange(char *output, char const *input, int num_of_columns,
               int const columns[]);

int main(int argc, char const *argv[]) {
    int num_of_columns;
    int columns[Length];
    char input[MAX_INPUT];
    char output[MAX_INPUT];

    num_of_columns = read_column_numbers(columns, Length);

    while (fgets(input, MAX_INPUT, stdin) != NULL) {
        printf("input: %s\n", input);
        rearrange(output, input, num_of_columns, columns);
        printf("output: %s\n\n", output);
    }

    return 0;
}

//读取输入了多少个有效数字列标号, 去掉-1 并返回个数
int read_column_numbers(int columns[], int max) {
    int num = 0;
    int ch;

    while (num < max && scanf("%d", &columns[num]) == 1 && columns[num] >= 0) {
        num++;
    }

    if (num % 2 != 0) {
        puts("Last column number is not paired.");
        exit(EXIT_FAILURE);
    }

    while ((ch = getchar()) != EOF && ch != '\n') {
        ;
    }

    return num;
}

void rearrange(char *output, char const *input, int num_of_columns,
               int const columns[]) {
    int col;
    int output_col;
    int len;

    len = strlen(input);
    output_col = 0;

    for (col = 0; col < num_of_columns; col += 2) {
        int nchars = columns[col + 1] - columns[col] + 1;

        if (columns[col] >= len || output_col == MAX_INPUT - 1) {
            break;
        }

        if (output_col + nchars > MAX_INPUT - 1) {
            nchars = MAX_INPUT - output_col - 1;
        }

        //从input的columns[col]偏移量开始复制nchars个字符到output
        // output_col一开始是0，后面每次复制一次之后，output_col+上nchars的值
        //下次复制就不会把上次复制的值覆盖，程序结束前把output_col设为\0结束函数
        strncpy(output + output_col, input + columns[col], nchars);
        output_col += nchars;
    }
    output[output_col] = '\0';
}