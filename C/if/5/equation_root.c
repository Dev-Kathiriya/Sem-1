#include <stdio.h>
#include <math.h>
void main(){
			float a,b,c,x1,x2,discriminant;
			printf("Enter coefficient x with power 2 now: \n");
			scanf("%f",&a);
			printf("Enter coefficient x with power 1 now: \n");
			scanf("%f",&b);
			printf("Enter coefficient x with power 0 now: \n");
			scanf("%f",&c);
			discriminant=(b*b)-(4*a*c);
			if (discriminant>0)
			{
				x1=(-b+sqrt(discriminant))/(2*a);
				x2=(-b-sqrt(discriminant))/(2*a);
				printf("The 2 roots are: %f,%f",x1, x2);
			}
			if (discriminant==0)
			{
				x1=x2=-b/(2*a);
				printf("The 2 roots are: %f,%f",x1, x2);
			}
			if (discriminant<0)
			{
				x1= (-b/(2*a));
				x2= sqrt(-discriminant)/(2*a);
				printf("First Roots is \n %f +i %f \n Second Roots is \n %f -i %f",x1,x2,x1,x2);
			}
}