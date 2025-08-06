#include<stdio.h>
struct Details{
char name[20];
int number;
char email[20];
};
int main(){
    int n;
    printf("The total number of employees:");
    scanf("%d",&n);
    struct Details ep[n];
    printf("Enter details :");
    for(int i=0;i<n;i++){
    scanf("%s",ep[i].name);
    scanf("%d",&ep[i].number);
    scanf("%s",ep[i].email);
    }
    printf("Details stored :\n");
    for(int i=0;i<n;i++){
    printf("%s ",ep[i].name);
    printf("%d ",ep[i].number);
    printf("%s\n",ep[i].email);
    }
    return 0;
}
