#include <stdio.h>
#include<stdlib.h>
int a[20];
int searchtest(int n,int tar);
int main(){
    int n, tar;
    
    printf("Enter array size:\n");
    scanf("%d",&n)
    printf("Enter %d array elems:",n);
    for(int i;i<n;i++){
        scanf("%d ",&a[i]);

    }
    printf("enter target:\n");
    scanf("%d",&tar);

    searchtest(n,tar
    return 0;
}
int searchtest(int n,int tar){
for(int i=0; i<n; i++){
    if(a[i]==tar){
        return i;
    }
} 
for(int i=0; i<n; i++){
    if(a[i]>tar){
        return i;

    }
}

}