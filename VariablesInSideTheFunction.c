#include<stdio.h>
void myFunction(); // Function prototype
int main(){
    myFunction(); // Call the function
    myFunction(); // Call the function again to show that the variable is local to the function

    return 0;
}
void myFunction(){
    int x=10; // Variable declared inside the function
    printf("The value of x is: %d\n", x); // Output the value of x
    
    x++; // Increment x to show that it is a local variable
    printf("The new value of x is: %d\n", x); // Output the new value of x
}