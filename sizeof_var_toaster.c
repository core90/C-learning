#include <stdio.h>

int main (void) {
    
    int result = 0; 
    int n, kb, mb, b= 0;
    char type = 0;
    
    scanf("%c %d", &type, &n);
    
    if (type == 'i') {
        result = n * sizeof(int);
    } else if (type =='s') {
        result = n * sizeof(short);
    } else if (type == 'c') {
        result = n * sizeof(char);
    } else if (type == 'd') {
        result = n * sizeof(double);
    } else {
        printf("invalid data type");
    }
    
    mb = result / 1000000;
    if (mb > 0) {
        printf("%d MB and ", mb);
    }
    
    result = result % 1000000;
    kb = result / 1000;
    if (kb > 0) {
        printf("%d KB and ", kb);
    }
    
    result = result % 1000;
    b = result;
    printf("%d B", b);
}