#include<stdio.h>
void main(){
            float num1,num2,num3;
            printf("Enter first number:\n");
            scanf("%f",&num1);
            printf("Enter second number:\n");
            scanf("%f",&num2);
            printf("Enter third number:\n");
            scanf("%f",&num3);
            (num1>num2)? printf("no. 1 multiplied by no.3 is%f", (num1*num3)):printf("no.2 multiplied by no.3 is%f", (num2*num3));
}