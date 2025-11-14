#include <stdio.h>

void main(){
	int n;
	printf("Enter integer: ");
	scanf("%d", &n);
	(n>0)?printf("Integer is positive.\n"):(n<0?printf("Integer is negative.\n"):printf("Integer is zero.\n"));
}
