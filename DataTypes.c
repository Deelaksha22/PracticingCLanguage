#include<stdio.h>
int main(){
    float a=3.10004; // Variable declaration and initialization
    printf("The value of a is: %.2f\n", a); // Output the value of a
    printf("The value of a is: %.4f\n", a); // Output the value of a with 4 decimal places

    float b=3.1000000000000004; // Variable declaration and initialization
    printf("The value of b is: %g\n", b); // Output the value of b with 16 decimal places

    float c=3.1000000000000004; // Variable declaration and initialization
    printf("The value of c is: %e\n", c); // Output the value


    return 0;
}