#include <stdio.h>

void main(){
	int n;
	printf("Enter amount of numbers: ");
	scanf("%d", &n);

	int sum=0;
	while(n>0){
		sum+=n;
		n--;
	}
	printf("Sum: %d\n", sum);

}
