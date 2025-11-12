#include <stdio.h>

int main(){
	char a;
	int b;
	long int c;
	float d;
	double e;

	printf("Size of a char variable: %zu \n", sizeof(a));
        printf("Size of a int variable: %zu \n", sizeof(b));
        printf("Size of a long int variable: %zu \n", sizeof(c));
        printf("Size of a float variable: %zu \n", sizeof(d));
	printf("Size of a double variable: %zu \n", sizeof(e));

	return 0;
}
