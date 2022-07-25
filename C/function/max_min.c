#include<stdio.h>
double max(double no1,double no2){
	if (no1>=no2)
	{
		return no1;
	}
}
void  main()
{
	double no1,no2;
	printf("Enter 2 numbers\n");
	scanf("%lf %lf",&no1,&no2);
	printf("Maximum no. is :\n %lf",max(no1,no2));
}