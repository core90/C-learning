#include <stdio.h>

void reverseArray(int *);

int main() {
    
    int length = 0;
    int * ptrLength = &length;
    int arr [6];
    
    for (int i = 0; i < 6; i++) {
        length++;
        scanf("%d", &arr[i]);
    }
    
    reverseArray(arr);
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
}
void reverseArray(int * ptr) {
    int tmp = 0;
    for (int i = 0; * ptrLength < 3; i++) {
    * (ptr + i) = tmp;
    }
}