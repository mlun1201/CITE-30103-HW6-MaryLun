#include <stdio.h>

void main(){
	int n, count=0;
	do{
		printf("Enter integer: ");
		scanf("%d", &n);
		count++;
	}
	while(n!=0);
	printf("%d numbers were entered.\n", count-1);
}
