#include "../inc/func.h"
#include "../inc/struct.h"

int main(int argc, char const *argv[]) {
    Pi pi = {FLOAT};
    pi.fi.f = 3.14;
    printf("%f\n", pi.fi.f);

    Pi pi2 = {INT, 3};
    printf("%d\n", pi2.fi.i);

    return 0;
}
