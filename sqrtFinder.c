#include <stdio.h>

int main() {

    // variables used inside the loop
    int sqrd, sqrt; 

    // input
    int x;

    // values that makes the loop infinite
    // for the break statement to play an advantage with
    int a, b;
    a = 1;
    b = 2;

    /* this is the initial value of the number 
    to be squared, so-called the 'squareroot' */
    sqrt = 1;

    printf("\n");
    printf("\n[This is a program that finds the square root of a number]\n");
    printf("Please enter the number to find its square root: ");
    scanf("%d", &x);

    printf("\n");


    while (a < b) {
        sqrd = sqrt * sqrt;
        if (x == sqrd) {
            break;
        } else if (x < sqrd) {
            break;
        } else {
            sqrt++;
        }
    }

    
    if (x == sqrd) {
        printf("The squre root of %d is %d\n", x, sqrt); 
    } else {
        printf("You have entered an invalid input!!\n");
    }

    printf("\n");

    printf("[Program finished!]\n\n\n");

    return 0;
}
