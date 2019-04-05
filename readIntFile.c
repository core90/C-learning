#include <stdio.h>

int main (void) {

    int num = 0;
    int grade = 0;
    int sum = 0;
    double avg = 0.0;

    FILE *infile;

    infile = fopen("studentGrades.txt", "r");

    fscanf(infile, "%d", &num);

    for (int i = 0; i < num; i++) {
        fscanf(infile, "%d", &grade);
        sum = sum + grade;
    }

    avg = sum / num;

    printf("%.2lf", avg);

    fclose(infile);

    return 0;
}