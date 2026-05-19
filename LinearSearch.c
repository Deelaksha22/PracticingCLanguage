#include<stdio.h>
void main(){
    int arr[5] = {1,2,3,4,5};
    int key = 3;
    int i;
    for(i=0;i<5;i++){
        if(arr[i] == key){
            printf("Element found at index %d",i);
            break;
        }
    }
    if(i == 5){
        printf("Element not found in the array");
    }
}