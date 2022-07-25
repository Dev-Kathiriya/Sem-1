#include <stdio.h>
void main(int no)
{
	printf("Enter no.of marks you want to Enter\n");
	scanf("%d",&no);
	float roll_mark[20][no];
	for (int i = 0; i < 20; ++i)
	{
		printf("Roll no. of Student %d is %d\n",i+1,i+1);
		for (int a = 0; a < no; ++a)
		{
			printf("Enter Marks of %d subjects\n", no);
			scanf("%f",&roll_mark[i][a]);
		}
	}
	for (int i = 0; i < 20; ++i)
	{
		printf("The Roll no and marks of Student are as Following\nStudent Roll no.%d\nMarks are :",i+1);
		for (int a = 0; a < no; ++a)
		{
			printf("%f\n",roll_mark[i][a]);
		}
	}
}