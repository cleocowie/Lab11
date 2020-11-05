// *** file header example *** //
/** lab11.c
* ===========================================================
* Name: Cleo Cowie, 13SEPT2020
* Section:
* Project: 
* Purpose: 
* ===========================================================
*/


#include "lab11functs.h"
#include <stdio.h>

int main (void) {
    int value;
    int value2;
    int value3;

    scanf("%d %d %d",&value,&value2,&value3);
    printf("The factorial of %d is %d.\n", value, numFactorial(value));

    if (isPrime(value2)==1) {
        printf("%d is a prime numer.\n", value2);
    }
    if (isPrime(value2)==0) {
        printf("%d is not a prime number.\n",value2);
    }

    floydsTriangle(value3);

    return 0;
}
