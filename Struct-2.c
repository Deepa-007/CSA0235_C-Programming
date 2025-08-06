#include<stdio.h>
struct comp{
char name[20];
int stock;
int amnt;
};
int main(){
int n;
printf("No of record needed:");
scanf("%d",&n);
struct comp c[n];
printf("Enter Details:");
for(int i=0;i<n;i++){
scanf("%s",c[i].name);
scanf("%d",&c[i].stock);
scanf("%d",&c[i].amnt);
}
printf("Total value:");
for(int i=0;i<n;i++){
printf("%s ",c[i].name);
printf("%d\n",c[i].stock*c[i].amnt);
}
return 0;
}
