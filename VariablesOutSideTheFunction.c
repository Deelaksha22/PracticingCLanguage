#include<stdio.h>
int x=10; // Variable declared outside the function (global variable)
void myFunction(); // Function prototype
int main(){
    printf("The value of x in main is: %d\n", x); // Output the value of x in main
    myFunction(); // Call the function
    printf("The value of x in main after calling myFunction is: %d\n", x); // Output the value of x in main after calling the function

    return 0;
}
void myFunction(){
    x++; // Increment the global variable x
    printf("The value of x in myFunction is: %d\n", x); // Output the value of x in the function
}