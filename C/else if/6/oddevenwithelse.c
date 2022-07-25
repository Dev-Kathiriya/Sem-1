#include<stdio.h>
void main(){
            int a;
            printf("Enter your number: ");
            scanf("%d",&a);
            if (a==0)
            {
                printf("Number entered is Neutral");
            }
            else if (a%2==0)
            {
                printf("Number entered is Even");
            }
            else{
                printf("Number entered is Odd");
            }
}