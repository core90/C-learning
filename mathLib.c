#include <stdio.h>
#include <math.h>

int main (void) {

    int num = 0;
    double result = 0;

    scanf("%d", &num);

    result = sqrt(num);
    printf("%.8lf\n", result);

    result = exp(1);
    printf("%.10lf\n", result);

    printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra program.c -lm -o program\n");

    return 0;
}