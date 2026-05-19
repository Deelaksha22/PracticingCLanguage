#include <stdio.h>
void swapper(int arr[20], int n);

int main() {
    int i, j, min;
    int n;
    int arr[20];
    
    printf("Entere number of elements an array\n");
    scanf("%d", &n);
    
    printf("Enter %d array elents : \n", n );
    for(int i=0;i<n-1;i++){
     scanf("%d ", &arr[i]);
    }
    swapper(arr, n);
    printf("Sorted array is: ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

return 0;
}
    
void swapper(int arr[20], int n){
    int i, j;
    for(int i=0; i<n-1; i++){
         int min=i;
        for(int j=i;j<n;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
        
    }
}
