typedef struct complex_t {
float real;
float imaginary;
} complex_t;

//function sum
void sum(complex_t first, complex_t second){
    complex_t output;
    output.real = first.real + second.real;
    output.imaginary = first.imaginary + second.imaginary;
    printf("%4.2f + i%4.2f \n", output.real, output.imaginary);
}

//function difference
void difference(complex_t first, complex_t second){
    complex_t output;
    output.real = first.real - second.real;
    output.imaginary = first.imaginary - second.imaginary;
    printf("%4.2f + i%4.2f \n", output.real, output.imaginary);
}

//function product
void product(complex_t first, complex_t second){
    complex_t output;
    output.real = first.real * second.real;
    output.imaginary = first.imaginary * second.imaginary;
    printf("%4.2f + i%4.2f \n", output.real, output.imaginary);
}

//function division
void division(complex_t first, complex_t second){
    complex_t output;
    output.real = first.real / second.real;
    output.imaginary = first.imaginary / second.imaginary;
    printf("%4.2f + i%4.2f \n", output.real, output.imaginary);
}
