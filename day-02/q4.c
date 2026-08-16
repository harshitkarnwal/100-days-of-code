//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main(){
 const float PI = 3.145;
 float radius, circumference, area;
 scanf("%f", &radius);
 area = PI * radius * radius;
 circumference = 2 * PI * radius;
 printf("Area = %.4f, Circumference = %.4f", area, circumference);
 return 0; 
}
