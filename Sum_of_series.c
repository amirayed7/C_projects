#include <stdio.h>
#include<math.h>


int main() {

    //Declare variables for 1st and 2nd input, the sum, neg to change the signs, and each term
    int x;
    int y;
    int sum;
    int neg;
    int term;

    //get inputs of 1st and 2nd numbers from user
    printf("Input the value of x :");
    scanf("%d", &x);

    printf("Input the number of terms : ");
    scanf("%d", &y);

    printf("The values of the series:\n");

    // initialize the sum, neg(just to switch the signs), and term
    sum = 0;
    neg = 1;
    term = x;

    //use for loop that will start with the first input and count by 2 until it reaches the 
    //right amount of terms from second input
    for(int i = 1; i < (2 * y); i += 2){

        //calculate and print out each term
        term = neg * pow(x, i);
        printf("%d\n",term);

        //add each term to the total sum and then flip the signs
        sum += term;
        neg *= -1;

    }

    //Print out the total sum
    printf("\nThe sum = %d\n",sum);

    return 0;

}
