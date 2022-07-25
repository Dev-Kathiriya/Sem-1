#include<stdio.h>
int main()
{
	int n;
	printf("Enter no. of no. you want to enter\n");
	scanf("%d",&n);
	float no[n],sum=0;
	printf("Enter no. now\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%f",&no[i]);
	}
	float *ptr=no;
	for (int i = 0; i < n; ++i)
	{
		sum+=ptr[i];
	}
	printf("Summation is %f\n", sum);
	return 0;
}