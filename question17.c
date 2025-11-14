#include <stdio.h>

char gradeLetter(float n){
        if(n>=90){
                return 'A';
        }
        if(n>= 80 && n<90){
                return 'B';
        }
        if(n>=70 && n <80){
                return 'C';
        }
        if(n>=60 && n<70){
                return 'D';
        }
        else{
                return 'F';

        }
}

void main(){
	float grade;
	printf("Enter numeric grade: ");
	scanf("%f", &grade);
	char letter = gradeLetter(grade);
	printf("%c\n", letter);
}
