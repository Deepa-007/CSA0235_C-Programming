#include<stdio.h>
int main()
{
   int N;
   printf("Enter the number:");
   scanf("%d",&N);
   int sum=0,M=N;
   while(M!=0){
    sum=sum+M%10;
    M=M/10;
   }
   printf("Sum of %d is : %d",N,sum);
    return 0;
}
