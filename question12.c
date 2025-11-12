#include <stdio.h>

int main(){
	int a = 5, b = 3, res;
	res = a + (b << 1);
	printf("Parantheses: %d \n", res);
	res =  a + b*2;
	printf("Arthmetic: %d \n", res);


	return 0;
}
