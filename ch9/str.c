#include <stdio.h>
#include <string.h>

int my_strpos(char *string, char *needle) {
    int len = strlen(string);
    int inner_len = strlen(needle);
    int staff;
    for (int i = 0; i < len; i++) {
        if (string[i] == needle[0]) {
            staff = 1;
            for (int j = 1; j < inner_len; j++) {
                if (string[i + j] == needle[j]) {
                    staff++;
                }
            }
            if (staff == inner_len) {
                return i;
            }
        }
    }
    return -1;
}

int main(int argc, char const *argv[]) {
    char *string = "ngstngrging";
    char *needle = "grg";
    char *strstr = strstr(string, needle);
    
    printf("%d\n", );
    return 0;
}
