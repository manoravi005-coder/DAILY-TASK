#include <stdio.h>

int main() {
    float length, breadth, side, base, height, radius;
    float areaRectangle, areaSquare, areaTriangle, areaCircle;
    float pi = 3.14;

    printf("Enter length and breadth of Rectangle: ");
    scanf("%f %f", &length, &breadth);

    printf("Enter side of Square: ");
    scanf("%f", &side);

    printf("Enter base and height of Triangle: ");
    scanf("%f %f", &base, &height);

    printf("Enter radius of Circle: ");
    scanf("%f", &radius);

   
    areaRectangle = length * breadth;
    areaSquare = side * side;
    areaTriangle = 0.5 * base * height;
    areaCircle = pi * radius * radius;

    
    printf("\nArea of Rectangle = %.2f\n", areaRectangle);
    printf("Area of Square = %.2f\n", areaSquare);
    printf("Area of Triangle = %.2f\n", areaTriangle);
    printf("Area of Circle = %.2f\n", areaCircle);

    return 0;
}