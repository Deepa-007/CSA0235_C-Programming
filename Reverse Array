#include<stdio.h>
int reverse(int arr[],int n){
    int *ptr1,*ptr2;
    ptr1=arr;
    ptr2=&arr[n-1];
    while(ptr1<ptr2){
        int temp=*ptr1;
        *ptr1=*ptr2;
        *ptr2=temp;
        ptr1++;
        ptr2--;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    reverse(arr,n);
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
}
