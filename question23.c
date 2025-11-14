#include <stdio.h>

void main(){
	int n, pos=0, neg=0, even=0, odd=0;
	do{
		printf("Enter integer: ");
		scanf("%d", &n);
		if(n>0){ pos++; }
		if(n<0){ neg++; }
		if(n%2==0 && n!=0){ even++; }
		if(n%2!=0){ odd++; }
	}
	while(n!=0);
	printf("Positive numbers: %d\nNegative numbers: %d\nEven numbers: %d\nOdd numbers: %d\n", pos, neg, even, odd); 

}
