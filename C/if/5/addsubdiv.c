#include<stdio.h>
void main(){
            int n; float a,b;
            printf("1)Addition\n" "2)Subtraction\n" "3)Multiplication\n" "4)Division\n" "Enter no. of the Operation you want to do:\n");
            scanf("%d",&n);

            if (n!=1 && n!=2 && n!=3 && n!=4)
            {
                printf("Please enter a valid input: \n");
                scanf("%d",&n);
            }
            printf("You can enter your First no.: \n");
            scanf("%f",&a);
            printf("You can enter your Second no. : \n");
            scanf("%f",&b);

            if (n==1)
            {
                printf("Answere is: %f",(a+b));
            }
            if (n==2)
            {
                printf("Answere is: %f",(a-b));
            }
            if (n==3)
            {
                printf("Answere is: %f",(a*b));
            }
            if (n==4)
            {
                printf("Answere is: %f",(a/b));
            }
}