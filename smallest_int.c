#include <stdio.h>

int min (int, int);

int main (void) {
    
    int n = 0;
    int numbers [10];
    int result = 0;

    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    
    int minNum = numbers[0];
    
    for (int j = 0; j < (n); j++) {
        result = min (numbers[j], numbers [j+1]);
        
        if (result < minNum){
            minNum = result;
        }
        j++;
        }
    
    printf("%d", minNum);
    
    return 0;
}

int min (int x, int y) {
    int compute = 0;
    if (x > y) {
        compute = y;
    }
    else {
        compute = x;
    }
    return compute;
}