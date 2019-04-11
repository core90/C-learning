#include <stdio.h>

//Write your function prototype here
void calc(int *);

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	//Write your function call here
    calc(ageAddr);
    
	printf("Your new age will be %d!\n", age);
	return 0;
}


//Write your function here
void calc (int * a) {
    if (*a < 21) {
        *a = *a * 2;
    } else {
        *a = *a -10;
    }
}