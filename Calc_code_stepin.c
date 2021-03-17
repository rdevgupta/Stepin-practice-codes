#include<stdio.h>
#include"Calc_code_stepin.h"
/**
 * @brief 
 * 
 * Write functions to compute sum, difference, product & division of two complex variables of the below structure.
 * 
 * typedef struct complex_t {
   float real;
   float imaginary;
   } complex_t;
 * 
 * Dev Gupta
 * Candidate Id:- 258219
 * 
 */
int main()
{
    complex_t first_variable, second_variable, result;

    //first complex number
    first_variable.real = 12;
    first_variable.imaginary = 24;

    //second complex number
    second_variable.real = 10;
    second_variable.imaginary = 12;

    //sum
    printf("Sum of complex variables is: \n");
    sum(first_variable, second_variable);
    //difference
    printf("Difference of complex variables is: \n");
    difference(first_variable, second_variable);
    //product
    printf("Product of complex variables is: \n");
    product(first_variable, second_variable);
    //division
    printf("Division of complex variables is: \n");
    division(first_variable, second_variable);
    return 0;
}

