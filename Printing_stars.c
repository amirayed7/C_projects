#include <stdio.h>


int main() {
    // Declare number to store the number of rows
    int number;

    //Get input from user and store it in number
    printf("Enter the number of rows: ");
    scanf("%d", &number);


    
    for(int i = 1; i <= number; i++){

        //Loop to print spaces before each *
        for(int space = 1; space <= number - i; space++){
            printf(" ");
        }

        //Loop to print the *s per row
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        //move to next line after all * are done for that row
        printf("\n");
    }

    return 0;
}
