#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv []) {

    double result = 0;
    int num = 0;
    double price = 0;

    if (argc != 3) {
        printf("Invalid input!\n");
    } else {

        num = atoi(argv[1]);
        price = atof(argv[2]);
        result = num * price;
        printf("%d plants for %.2lf dollars each cost %.2lf dollars.\n", num, price, result);
    }
    return 0;
}