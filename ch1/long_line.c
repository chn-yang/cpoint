//#include <stdio.h>
//#include <zconf.h>
//
//
//int get_line(char *line, int max_line);
//
//void copy(char to[], char from[]);
//
//int main() {
//    int len;
//    int max;
//    char line[INT_MAX];
//    char longest[100][INT_MAX];
//    max = 80;
//    while ((len = get_line(line, INT_MAX))) {
//        if (len > max) {
//            max = len;
//            copy(longest, line);
//        }
//    }
//    for (int i = 0; i < longest[i]; ++i) {
//
//    }
//    return 0;
//}
//
////将一行读入到数组中并返回长度
//int get_line(char *s, int lim) {
//    int c, i;
//    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
//        s[i] = c;
//    }
//    if (c == '\n') {
//        s[i] = c;
//        ++i;
//    }
//    s[i] = '\0';
//    return i;
//}
//
//void copy(char to[], char from[]) {
//    int i;
//    i = 0;
//    while ((to[i] = from[i]) != '\0') {
//        ++i;
//    }
//}