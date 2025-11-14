#include <stdio.h>

void main(){
	int a;
	printf("Enter positive integer: ");
	scanf("%d", &a);
	printf("Input: %d\n", a);
	int b=0;
	while(a/10!=0){
		b+=a%10;
		b*=10;
		a/=10;
	}
	b+=a;
	printf("Reverse: %d\n", b);

}
