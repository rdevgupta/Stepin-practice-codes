#include<stdio.h>
/**
 * @brief 
 * 
 * Write functions to compute sum, difference, product & division of two complex variables of the below structure.
 * 
 * Dev Gupta
 * Candidate Id:- 258219
 * 
 */
typedef struct complex_t {
float real;
float imaginary;
} complex_t;

//functions declarations
complex_t sum(complex_t first, complex_t second);
complex_t difference(complex_t first, complex_t second);
complex_t product(complex_t first, complex_t second);
complex_t division(complex_t first, complex_t second);

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
    result = sum(first_variable, second_variable);
    printf("%4.2f + i%4.2f \n", result.real, result.imaginary);

    //difference
    printf("Difference of complex variables is: \n");
    result = difference(first_variable, second_variable);
    printf("%4.2f + i%4.2f\n", result.real, result.imaginary);

    //product
    printf("Product of complex variables is: \n");
    result = product(first_variable, second_variable);
    printf("%4.2f + i%4.2f\n", result.real, result.imaginary);

    //division
    printf("Division of complex variables is: \n");
    result = division(first_variable, second_variable);
    printf("%4.2f + i%4.2f\n", result.real, result.imaginary);

    return 0;
}

//definitons of function sum
complex_t sum(complex_t first, complex_t second)
{
    complex_t output;
    output.real = first.real + second.real;
    output.imaginary = first.imaginary + second.imaginary;
    return output;
}

//definitons of function difference
complex_t difference(complex_t first, complex_t second)
{
    complex_t output;
    output.real = first.real - second.real;
    output.imaginary = first.imaginary - second.imaginary;
    return output;
}

//definitons of function product
complex_t product(complex_t first, complex_t second)
{
    complex_t output;
    output.real = first.real * second.real;
    output.imaginary = first.imaginary * second.imaginary;
    return output;
}

//definitons of function division
complex_t division(complex_t first, complex_t second)
{
    complex_t output;
    output.real = first.real / second.real;
    output.imaginary = first.imaginary / second.imaginary;
    return output;
}
