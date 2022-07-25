#include<stdio.h>
int main()
{
	float no1,no2;
	printf("Enter 2 no.\n");
	scanf("%f %f",&no1,&no2);
	float *ptr1=&no1,*ptr2=&no2;
	printf("Summation is %f\n", *ptr1+*ptr2);
	return 0;
}