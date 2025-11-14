#include <stdio.h>

void main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	int bool = n%2;
	if(!bool){
		bool=n%3;
		if(!bool){
			bool=n%7;
			if(bool){
				printf("This number is divisible by both 2 and 3 but not 7.\n");	
			}
		}
	}
}
