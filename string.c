#include <stdio.h>

int main(){

    char words [100];
    int length [100];
    int num = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;

    // initialize array with 0
    for (i = 0; i < 100; i++) {
        length[i] = 0;
    }

    // prompt user to enter amount of words to read
    scanf("%d", &num);

    // iterate over number of words and prompt user for words
    for (j = 0; j < num; j++) {
        scanf("%s", words);

        // iterate over every word until null terminator is found, count number of characters
        l = 0;
        while (words[l] != '\0'){
            l++;
        }

        // add +1 word in length array
        length[l] = length[l] + 1;
    }

    // print out result
    for (k = 0; k < 10; k++){
        printf("There are %d words with %d letters.\n", length[k], k);
    }
    return 0;
}