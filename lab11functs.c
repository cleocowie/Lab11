
#include <stdio.h>
#include <math.h>
#include <ctype.h>B
#include <string.h>
#include <stdbool.h>


int numFactorial(int integer) {
    int i;
    int factorial=1;

    for(i = integer; i>1; i--){
        factorial=factorial*i;
    }

    return factorial;
}

int isPrime(int prime) {
    int i;
    
    for (i=2; i<=prime; i++) {

        if (prime % i ==0) {
            return 1;
        }
    }
return 0;
}

void floydsTriangle (int rows) {
    int i;
    int j;

    for (i=1; i<=rows; i++) {

       for (j=1; j<=i; j++) {

           if ((i+j)%2==1) {

               printf("0");
           }
           
           else {
               printf("1");
           }
       }
           
        printf("\n");
       }
      
       return ;
}
    


