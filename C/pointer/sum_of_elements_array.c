#include<stdio.h>
int main()
{
	int n;
	printf("Enter no.of elements you want to add\n");
	scanf("%d",&n);
	float no[n],*ptr,sum=0;
	ptr=&no[0];
	printf("Enter no Now\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%f",ptr);
		ptr++;
	}
	ptr--;
	for (int i = 0; i < n; ++i)
	{
		sum+=*ptr;
		ptr--;
	}
	printf("Sum is\n %f",sum);
	return 0;
}