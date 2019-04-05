#include <stdio.h>

int main (void) {

    char filename [] = "myGrades.txt";
    int newGrade = 0;
    int oldGrade = 0;

    FILE *infile;

    scanf("%d", &newGrade);

    infile = fopen(filename, "r");

    while (fscanf(infile, "%d", &oldGrade) != EOF) {

    }

    fclose(infile);

    if (newGrade == oldGrade) {
        infile = fopen(filename, "r");

        while (fscanf(infile, "%d", &oldGrade) != EOF) {
            printf("%d ", oldGrade);
        }

        return 0;

    } else {

        infile = fopen(filename, "a");
        fprintf(infile, " %d", newGrade);
        fclose(infile);
    }

    infile = fopen(filename, "r");

    while (fscanf(infile, "%d", &oldGrade) != EOF) {
        printf("%d ", oldGrade);
    }
    fclose(infile);

    return 0;
}