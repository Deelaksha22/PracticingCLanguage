#include<stdio.h>
int main(){
    int a,b;
    
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);

    if(a>0 && b>0){
        printf("Both numbers are positive\n");
    }
    else if(a>0 || b>0){
        printf("At least one number is positive\n");
    }
    else{
        printf("Neither number is positive\n");
    }
    return 0;
}  