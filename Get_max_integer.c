
#include <stdio.h>

int main() {
    int first;
    int second;
    int third;
    int Max;

    printf("Input the first integer: ");
    scanf("%d", &first);
    printf("\n");

    printf("Input the second integer: ");
    scanf("%d", &second);
    printf("\n");

    printf("Input the third integer: ");
    scanf("%d", &third);
    printf("\n");


    if (first >= second && first >= third){
        Max = first;
    } else if (second >= third){
        Max = second;
    } else {
        Max = third;
    }

    printf("Maximum value of three integers: %d\n", Max);

    return 0;
}
