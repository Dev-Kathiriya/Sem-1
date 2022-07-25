#include<stdio.h>
void main(){
            float a;
            printf("Enter your number: ");
            scanf("%f",&a);
            if (a>0)
            {
                printf("Number entered is Positive");
            }
            else if (a<0){
                printf("Number entered is Negative");
            }
            else {
                printf("Number entered is Neutral");
            }
}