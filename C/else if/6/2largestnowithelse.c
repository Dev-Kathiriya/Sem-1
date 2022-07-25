#include<stdio.h>
void main(){
            int a,b;
            printf("Enter first number:\n");
            scanf("%d",&a);
            printf("Enter second number:\n");
            scanf("%d",&b);
            if (a>b)
            {
                printf("Largest entered no. is %d",a);
            }
            else
            {
                printf("Largest entered no. is %d",b);
            }
}