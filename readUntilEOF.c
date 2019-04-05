#include <stdio.h>

int main(void) {
	FILE *infile;
	int N, done, best;
	double myClass, otherClass;

	infile = fopen("gradeComparison.txt", "r");

	fscanf(infile, "%lf", &myClass);
	N=1;
	done = 0;
	best = 1;

	while (!done) {
		done = fscanf(infile, "%lf", &otherClass) == EOF;
		if (!done) {
			N++;
			if (otherClass>myClass) {
				done = 1;
				best = 0;
			}
		}
	}

	fclose(infile);

	if (best) {
		printf("Yes\n");
	} else {
		printf("No %d\n", N);
	}

	return 0;
}