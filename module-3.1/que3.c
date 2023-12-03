#include<stdio.h>
void main()
{

    float radius,length,width,base,height,areacircle,arearectangle,areatriangle;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    areacircle = 3.14159 * radius * radius;
    arearectangle = length * width;
    areatriangle = 0.5 * base * height;

    printf("\nArea of Circle: %f\n",areacircle);
    printf("Area of Rectangle: %f\n",arearectangle);
    printf("Area of Triangle: %f\n", areatriangle);
}
