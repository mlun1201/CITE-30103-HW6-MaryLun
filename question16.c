#include <stdio.h>

void main(){
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	if(n==0){
		printf("Integer is zero.\n");
	}
	else if(n>0){
		printf("Integer is positive.\n");
	}
	else{
		printf("Integer is negative.\n");
	}

}
