#include <stdio.h>

int main(){
	int a, b;
	printf("Enter integer: ");
	scanf("%d", &a);
	printf("Enter integer: ");
	scanf("%d", &b);
	int add = a+b;
	int sub = a-b;
	int mul = a*b;
	int div = a/b;
	int rem = a%b;
	printf("Sum: %d \nDifference: %d \nProduct: %d \nQuotient: %d \nRemainder: %d \n", add, sub, mul, div, rem);
	return 0;
}
