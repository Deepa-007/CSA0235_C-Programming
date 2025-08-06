#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct bank{
char type[20];
int amt;
char date[8];
};
int main(){
struct bank dd;
dd.amt=10000;
int c;
do{
printf("\nEnte ur choice 1.Withdrawal 2.Deposit 3.Balance Amount 4.Exit: ");
scanf("%d",&c);
switch(c){
case 1:
        int a;
        printf("Enter Amount :");
        scanf("%d",&a);
        if(a>dd.amt)
            printf("The amount is not singnificant");
        else{
            int res=dd.amt-a;
            printf("The remaining amt is:%d\n",res);
            dd.amt=res;
            strcpy(dd.type,"Withdrawal");
            strcpy(dd.date,"06.08.2025");
            printf("%s %s",dd.type,dd.date);}
            break;
case 2:
        int A;
        printf("Enter Amount :");
        scanf("%d",&A);
        dd.amt=dd.amt+A;
        printf("Updated Value is:%d",dd.amt);
        strcpy(dd.type,"Withdrawal");
        strcpy(dd.date,"06.08.2025");
        break;

case 3:
        printf("The Balance Amount Reminding is:%d",dd.amt);
        break;
case 4:
        printf("Thank you !");
        exit(0);

}
}while(c<=4);
return 0;
}
