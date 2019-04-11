#include <stdio.h>


int main() {
    //! showArray(word, cursors=[i])
    int length = 0;
    int counter = 0;
    int i = 0;
    int j = 0;
    int tmp = 0;
    char word [51];
    
    scanf("%s", word);
        
    while (word[length] != '\0') {
        length++;
    }

    for (j = 0; j < length-1; j++) {
        for (i = 0; i < length-1; i++) {
            if (word[i] > word[i+1]){
                tmp = word[i];
                word[i] = word[i+1];
                word[i+1] = tmp;
            }
        }
        
    }
    
    for (i = 0; i < length-1; i++) {
        if (word[i] == word[i+1] && word[i] != word[i-1]) {
            counter = counter +1;
        }
    }

    
    return 0;
}