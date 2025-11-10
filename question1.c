//documentation
/* Program for calculating the area and perimeter of a rectangle
 * Author: Mary Lun
 */

//link
#include <stdio.h>

//declaration
float area(float l, float w);
float perimeter(float l, float w);

//main
int main(){
        float l;
        float w;
        printf("Enter length of rectangle: ");
        scanf("%f", &l);
        printf("Enter width of rectangle: ");
        scanf("%f", &w);

        float a = area(l,w);
        printf("Area: %.2f \n", a);

        float p = perimeter(l,w);
        printf("Perimeter: %.2f \n", p);

        return 0;
}

//functions
float area(float l, float w){
        return l*w;
}

float perimeter(float l, float w){
        return l+l+w+w;
}
