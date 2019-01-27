#include <stdio.h>
#include <memory.h>

#define MAXLINE 1000

int get_line(char *line, int max);

int strindex(char source[], char searchfor[]);

char pattern[] = "ould";

//int strlen(char s[]) {
//    int i = 0;
//    while (s[i] != '\0') {
//        i++;
//    }
//    return i;
//}

int main() {
//    char line[MAXLINE];
//    int found = 0;
//
//    while (get_line(line, MAXLINE) > 0) {
//        if ( >= 0) {
//            printf("%s", line);
//            found++;
//        }
//    }
//    printf("%d\n", found);
    int i = strindex("would", pattern);
    printf("%d\n", i);
    return 0;
}

int get_line(char *s, int limit) {
    int c, i;
    i = 0;
    while (--limit > 0 && (c = getchar()) != EOF && c != '\n') {
        s[i++] = c;
    }
    if (c == '\n') {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

int strindex(char s[], char t[]) {
    int i, j, k;

    for (i = 0; s[i] != '\0'; ++i) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; ++j, ++k);
        if (k > 0 && t[k] == '\0') {
            return i;
        }
    }
    return -1;
}

int strrindex(char s[], char t[]) {
    int i, j, k;
    for (i = (int) strlen(s) - 1; i > 0; i--) {
        for (j = i, k = 0; k>0 && s[j] == t[k]; --j, --k);
        if (k > 0 && t[k] == '\0') {
            return i;
        }
    }
    return -1;
}