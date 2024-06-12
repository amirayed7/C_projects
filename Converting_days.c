#include <stdio.h>

int main() {
    int days;
    
    printf("Please enter a number of days:\n");
    scanf("%d", &days);
    printf("Number of days: %d\n", days);

    int years = days / 365;
    printf("Years: %d\n", years);

    int weeks = (days % 365) / 7;
    printf("Weeks: %d\n", weeks);

    int Days = ((days % 365) % 7);
    printf("Days: %d\n", Days);

    return 0;
}
