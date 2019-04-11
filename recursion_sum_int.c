#include <stdio.h>

int sumOfDigits(int);

int main (void) {
    int result, n = 0;
    
    scanf("%d", &n);
    
    result = sumOfDigits(n);
    printf("%d", result);
	
	return 0;
}

int sumOfDigits(n) {
    
    if (n < 10) {
        return n;
    }
    return (n%10 + sumOfDigits(n/10));
}