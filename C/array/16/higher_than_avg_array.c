#include <stdio.h>
void main(){
	int n,count=0;
	printf("Enter No.of No. :\n");
	scanf("%d",&n);
	float no[n],avg;
	printf("Enter your no.\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%f",&no[i]);
		avg+=no[i];
	}
	for (int i = 0; i < n; ++i) if (no[i]>avg) count++;
	printf("No. Higher than average of an array are %d\n",count);
}