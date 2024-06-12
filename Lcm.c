#include <stdio.h>


int main() {

    //Declare variables for 1st and 2nd input, max number, greatgest common denominator, and the least common multiple
    int a;
    int b;
    int max;
    int gcd;
    int lcm;

    //Print the header 
    printf("   LCM of two numbers: \n  ----------------------\n");

    //get inputs of 1st and 2nd numbers from user
    printf("Input 1st number for LCM: ");
    scanf("%d", &a);

    printf("Input 2nd number for LCM: ");
    scanf("%d", &b);

    //Find the bigger number 
    max = 0;

    if (a >= b) {
        max = a;
    }
    else{
        max = b;
    }

    //use the for loop to find the greatest common denominator
    for(int i = 1; i <= max; i++){
        if(a % i == 0 && b % i == 0){
            gcd = i;
        }
    }

    //calculate to find the least common multiple
    lcm = (a * b) / gcd;


    //Print out the first and second input and the lcm of the 2 numbers
    printf("\nLCM of %d and %d = %d\n",a,b,lcm);

    return 0;
}
