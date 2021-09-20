#include <stdio.h>

int main() {

    int p = 3;
    int i = 141592;

    printf("the first 7 digits of pi: %d %d\n", p, i);

    double x = 23.56;
    unsigned int y = 56 - 57;
    char s[] = "jake the fat dog";

    printf("out of bounds 1: %d\n", y);
    printf("out of bounds 2: %c\n", s[27]);
    printf("double: %lf", x);

}
