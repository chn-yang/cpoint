//#include <stdio.h>
//
//#define LOWER 0
//#define UPPER 300
//#define STEP 10
//#define IN 1
//#define OUT 0
//
///**
// * 华氏度转摄氏度
// */
//double f2c(int f) {
//    return (5.0 / 9) * (f - 32);
//}
//
////打印输入的字符
//void in_out() {
//    int c;
//    while ((c = getchar()) != EOF) {
//        putchar(c);
//    }
//    //    printf("EOF = %d\n", EOF);
//    //    printf("%d\n", getchar() != EOF);
//}
//
//void count_nl() {
//    int c, nl;
//    nl = 0;
//    while ((c = getchar()) != EOF) {
//        if (c == '\n') {
//            ++nl;
//        }
//    }
//    printf("%d\n", nl);
//}
//
//void count_char() {
//    double nc;
//    for (nc = 0; getchar() != EOF; ++nc);
//    printf("%.0f\n", nc);
//}
//
//void count_space_nl_t() {
//    int c;
//    int space = 0;
//    int nl = 0;
//    int t = 0;
//    while ((c = getchar()) != EOF) {
//        if (c == ' ') {
//            ++space;
//        }
//        if (c == '\n') {
//            ++nl;
//        }
//        if (c == '\t') {
//            ++t;
//        }
//    }
//    printf("has %d space, has %d \\n, has %d \\t\n", space, nl, t);
//}
//
//void print_tb() {
//    int c;
//    while ((c = getchar()) != EOF) {
//        if (c == '\t') {
//
//            printf("\\t");
//        } else if (c == '\b') {
//            printf("\\b");
//        } else if (c == '\\') {
//            printf("\\\\");
//        } else {
//            putchar(c);
//        }
//    }
//}
//
//void print_words() {
//    int c;
//    while ((c = getchar()) != EOF) {
//        putchar(c);
//        if (c == ' ' || c == '\n' || c == '\t') {
//            printf("\n");
//        }
//    }
//}
//
//void print_words2() {
//    int c;
//    int state = OUT;
//    while ((c = getchar()) != EOF) {
//        if (c == ' ' || c == '\n' || c == '\t') {
//            if (state == IN) {
//                printf("\n");
//                state = OUT;
//            }
//        } else if (state == OUT) {
//            state = IN;
//            putchar(c);
//        } else {
//            putchar(c);
//        }
//    }
//}
//
//int power(int base, int n) {
//    int sum;
//    for (sum = 1; n > 0; n--) {
//        sum = sum * base;
//    }
//    return sum;
//}
//
////int main() {
////    for (int i = 0; i <= 300; i += 10) {
////        printf("%d\t%8.2f\n", i, f2c(i));
////    }
////    printf("%d\n", power(3, 2));
////    printf("%d\n", power(2, 3));
////}