#include<stdio.h>
int main(){
    int a = 10; // Variable declaration and initialization
    int *ptr = &a; // Pointer declaration and initialization
    printf("The value of a is: %d\n", a); // Output the value of a
    printf("The value of a using pointer is: %d\n", *ptr); // Output the value of a using the pointer
    printf("The address of a is: %p\n", &a); // Output the address of a
    printf("The address stored in pointer is: %p\n", ptr); // Output the address stored in the pointer
    return 0;
}