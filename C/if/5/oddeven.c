#include<stdio.h>
void main(){
            int a;
            printf("Enter your number: \n");
            scanf("%d",&a);
            if (a==0)
            {
                printf("Number entered is Neutral");
            }
            if (a%2==0 && a!=0)
            {
                printf("Number entered is Even");
            }
            if(a%2!=0)
                printf("Number entered is Odd");
}