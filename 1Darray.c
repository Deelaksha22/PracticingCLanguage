#include<stdio.h>
int main(){
    int arr[5] = {10, 20, 30, 40, 50}; // Declare and initialize a 1D array
    printf("The elements of the array are:\n");
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]); // Output each element of the array
    }
    printf("\n");
    return 0;
}