#include <stdio.h>

void main(){
	char op;
	int a, b;
        printf("Enter arithmetic operation: ");
        scanf("%c", &op);
	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);
	
	int result;
	switch (op){
		case '+':
			result=a+b;
			printf("%d %c %d = %d\n", a, op, b, result);
			break;
		case '-':
			result=a-b;
			printf("%d %c %d = %d\n", a, op, b, result);
			break;
		case '*':
			result=a*b;
			printf("%d %c %d = %d\n", a, op, b, result);
			break;
		case '/':
			result=a/b;
			printf("%d %c %d = %d\n", a, op, b, result);
			break;
		case '%':
			result=a%b;
			printf("%d %c %d = %d\n", a, op, b, result);
			break;
		default:
			printf("Not a valid operation.\n");
	}
}
