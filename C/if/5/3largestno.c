#include<stdio.h>
void main(){
            int a,b,c;
            printf("Enter first number:\n");
            scanf("%d",&a);
            printf("Enter second number:\n");
            scanf("%d",&b);
            printf("Enter third number:\n");
            scanf("%d",&c);
            if (a>b && a>=c)
            {
                printf("Largest entered no. is %d",a);
            }
            if (a<=b && b>c)
            {
                printf("Largest entered no. is %d",b);
            }
            if (c>=b && a<c)
            {
                printf("Largest entered no. is %d",c);
            }
            if (c==b && a==c)
            {
                printf("Largest entered no. is %d",c);
            }
}