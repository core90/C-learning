#include <stdio.h>

void reverseArray(int *);

int main() {

    int arr [6];
    int length = 0;

    for (int i = 0; i < 6; i++) {
        length ++;
        scanf("%d", &arr[i]);
    }

    reverseArray(arr);

    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

void reverseArray(int * a) {
    int tmp = 0;

    tmp = * a;
    * a = * (a + 5);    // same as a[0] and a[5]
    * (a + 5) = tmp;

    tmp = * (a + 1);
    * (a + 1) = * (a + 4); // same as a[1] and a[4]
    * (a + 4) = tmp;

    tmp = * (a + 2);
    * (a + 2) = * (a + 3); // same as a[2] and [3]
    * (a + 3) = tmp;
}