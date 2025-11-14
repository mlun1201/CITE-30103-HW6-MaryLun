#include <stdio.h>

int checkGrade(){
	float grade;
	printf("Enter grade: ");
	scanf("%f", &grade);
	if(grade>=40){ 
		return 0;
	}
	else{
		return 1;
	}
}

void main(){
	int bool = checkGrade();
	bool += checkGrade();
	bool += checkGrade();
	bool += checkGrade();
	bool += checkGrade();
	if(bool==0){ 
		printf("PASS\n");
	}
	else{
		printf("FAIL\n");
	}
}
