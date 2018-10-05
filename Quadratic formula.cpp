/* 
   This program will help to the user to calculate the result of a
   quadratic function with 3 values the the program will ask to him
 
   Author: Victor Manuel Gastelum Huitzil
   e-mail: A01411985@itesm.mx
   Date: 04/10/18
*/ 


#include <stdio.h>
#include <math.h> // This library contains the square root 
#include <stdlib.h> // This library will provide the fgets() function 
#include <string.h> // This library contains the string functions


int main() {
    char in1[50];
    char in2[50];
    char in3[50];
    char *res;
    double a;
    double b;
    double c;
    double discriminant;
    double root1;
    double root2;
    
    // I ask to the user for 3 values, so then i can execute the quadratic formula

    printf("Give me 3 values to calculate the result of a quadratic formula \n");

    printf("\nGive me the value of a: ");
    fgets(in1, 50, stdin);
    
    a=strtod(in1, &res);

    printf("\nGive me the value of b: ");  
    fgets(in2, 50, stdin);
    
    b=strtod(in2, &res);

    printf("\nGive me the value of c: ");
    fgets(in3, 50, stdin);
    
    c=strtod(in3, &res);
    
    // If the values from the user are invalids, the program will notice him
    if ((strlen(in1) == strlen(res)) || (strlen(in2) == strlen(res)) ||
            (strlen(in3) == strlen(res))){
            printf("\nCheck your values. You must only enter numbers.");

        } else { // if the values are valid, then it will execute the quadratic formula
        if (a!=0)
        {
            discriminant=b*b-4*a*c;

            if (discriminant<0) {
                printf("\nThere are no values of x.");

            } else if (discriminant==0) {                         // If the values are equals to 0 the program will notice him, 
                printf("\nThe value of x is: %.2lf ", -b/(2*a)); // since it cannot be divider between 0

            } else { 
                printf("\nThe values of x are: %.2lf and %.2lf", (-b+sqrt(discriminant))/(2*a), // if the discriminant is over 0
                       (-b-sqrt(discriminant))/(2*a));                                          // it will print 2 results        
            }
        }
    }

return 0;
}
