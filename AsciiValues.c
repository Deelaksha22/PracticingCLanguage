#include<stdio.h>
int main(){
    char c;
    printf("Enter a character:\n");
    scanf("%c",&c);
    printf("ASCII value of %c is %d",c,c);

    printf("Enter a value:\n");
    int n;
    scanf("%d",&n);
    printf("Character value of %d is %c",n,n);
    return 0;
}