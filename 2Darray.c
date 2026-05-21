#include<stdio.h>
int main(){
    int arr[2][3] = { {1, 2, 3}, {4, 5, 6} }; // Declare and initialize a 2D array
    printf("The elements of the 2D array are:\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", arr[i][j]); // Output each element of the 2D array
        }
        printf("\n"); // New line after each row
    }
    return 0;   
}