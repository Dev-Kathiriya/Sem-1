#include<stdio.h>
void main(){
            float a,b,c;
            printf("Enter first number:\n");
            scanf("%f",&a);
            printf("Enter second number:\n");
            scanf("%f",&b);
            printf("Enter third number:\n");
            scanf("%f",&c);
            (a>=b)? (a>=c)? printf("Largest entered no. is %f",a): printf("Largest entered no. is %f",c) : (b>=c)?printf("Largest entered no. is %f",b):printf("Largest entered no. is %f",c);            
}