#include <stdio.h>

void compute (double, char);

int main (void) {
    
    int n = 0;
    double x = 0;
    char y = 0;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%lf %c", &x, &y);
        compute(x, y);
        printf("\n");

    }
    return 0;
}

void compute (double a, char pattern) {
    if (pattern == 'm'){
        double ft = 0;
        ft = a * 3.2808;
        printf("%lf ft", ft);
    } 
    
    else if (pattern == 'g') {
        double lbs = 0;
        lbs = a * 0.002205;
        printf("%lf lbs", lbs);
    } 
    
    else if (pattern == 'c') {
        double f = 0;
        f = 32 + (1.8 * a);
        printf("%lf f", f);
    }
    
}