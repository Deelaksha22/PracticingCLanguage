#include<stdio.h>
int main(){
    char str[20] = "Hello, World!"; // Declare and initialize a string (character array)
    printf("The string is: %s\n", str); // Output the string
    printf("The length of the string is: %lu\n", sizeof(str) - 1); // Output the length of the string (excluding null terminator)
    return 0;
}