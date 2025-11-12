#include <stdio.h>

#define PI 3.1416

int main() {
	float r;
	const float pi = 3.1416;

	printf("Enter radius of circle: ");
	scanf("%f", &r);

	float area = PI*(r*r);
	printf("Area: %.2f \n", area);
	float cir = 2*pi*r;
	printf("Circumference: %.2f \n", cir);

	return 0;
}
