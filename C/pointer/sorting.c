#include<stdio.h>
double swap(double *x,double *y){
  *x+=*y;
  *y=*x-*y;
  *x-=*y;
}
int main()
{
	int n;
	printf("Enter no.of no. you want to enter\n");
	scanf("%d",&n);
	double no[n],*ptr;
	ptr=&no[0];
	printf("Enter your no. Now\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%lf",&no[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			if (ptr[i] >= ptr[j])
			{
				swap(&ptr[i],&ptr[j]);
			}
		}
	}
	printf("After sorting no. are\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%lf\n",*ptr);
		ptr++;
	}
}
