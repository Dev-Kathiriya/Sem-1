#include<stdio.h>
void main(){
            float firstno,secondno;
            printf("Enter first number:\n");
            scanf("%f",&firstno);
            printf("Enter second number:\n");
            scanf("%f",&secondno);
            (firstno >= secondno)? printf("First number is larger which is %f", firstno):printf("Second number is larger which is %f", secondno);
}