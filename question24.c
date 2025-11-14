#include <stdio.h>

void main(){
	int count=0;
	for(int i=0;i<50;i++){
		if(i==40){break;}
		if(i%5==0){continue;}
		printf("%d\n", i);
	}
}
