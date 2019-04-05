#include <stdio.h>

int main (void) {
    int i = 10;
    int result = 0;

    result = 2 * i++;

    printf("%d", result);

    return 0;
}