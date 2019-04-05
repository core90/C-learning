#include <stdio.h>

int main(){

    char words [100];

    int num = 0;
    int i = 0;
    int j = 0;
    int l = 0;
    int max = 0;

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
        // check if new word is bigger than before
        if (max < l) {
        max = l;
        }
    }
    printf("%d", max);
    return 0;
}