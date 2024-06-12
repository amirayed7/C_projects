#include <stdio.h>


int main() {
    double radius;

    printf("Please enter a radius to calculate the perimeter and area of a circle:\n");
    scanf("%lf", &radius);

    double perimeter = 2 * 3.14 * radius;
    printf("Perimeter of the circle: %lf\n", perimeter);

    double area = 3.14 * (radius * radius);
    printf("Area of the circle: %lf\n  inches", area);

    return 0;
}
