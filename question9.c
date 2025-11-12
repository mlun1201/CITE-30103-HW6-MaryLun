#include <stdio.h>

int main(){
	int a = 9, b = 2;
	int integer = 9/2;
	float floating = 9/2;
	printf("Implicit casting: \n");
        printf("Integer: %d Floating: %.2f \n", integer, floating);
	integer = (float) 9/2;

	floating = (float) 9/2;
        printf("Explicit casting: \n");
	printf("Integer: %d Floating: %.2f \n", integer, floating);


	return 0;
}

