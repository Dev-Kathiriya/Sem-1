#include <stdio.h>
void main(){
	int n;
	printf("Enter number of No. you want to Enter\n");
	scanf("%d",&n);
	float no[n],max,min,sum=0;
	for (int i = 0; i < n; ++i)
	{
		scanf("%f",&no[i]);
		if(i==0) max=no[i],min=no[i];
		else if (max < no[i])
		{
			max=no[i];
		}
		else if (min>no[i])
		{
			min=no[i];
		}
		sum+=no[i];
	}
	printf("Max no is %f\nMin no is %f\nSum is %f\nAverage is %f",max,min,sum,sum/n);
}