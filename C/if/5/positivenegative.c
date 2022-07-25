#include<stdio.h>
void main(){
            float a;
            printf("Enter your number: ");
            scanf("%f",&a);
            if (a>0)
            {
                printf("Number entered is Positive");
            }
            if (a<0){
                printf("Number entered is Negative");
            }
            if (a==0){
                printf("Number entered is Neutral");
            }
}