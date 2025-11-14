#include <stdio.h>

void main(){
	int l, r;
	printf("Enter range L to R\nL: ");
	scanf("%d", &l);
	printf("R: ");
	scanf("%d", &r);
	for(int i=l;i<=r;i++){
		printf("Table of %d\n", i);

		for(int j=1;j<=10;j++){
			printf("%d x %d = %d\n", i, j, i*j);

		}
		printf("\n");

	}
}
