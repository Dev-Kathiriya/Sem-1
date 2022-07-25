#include <stdio.h>
void main(){
	float stu[5][3],sum=0;
	for (int i = 0; i < 5; ++i)
	{
		printf("Enter Marks of Student %d :\n", i+1);
		for (int a = 0; a < 3; ++a)
		{
			scanf("%f",&stu[i][a]);
			sum+=stu[i][a];
		}
		printf("Average Marks of student %d is %f\nTotal Marks is %f\n\n",i+1,sum/3,sum);
	}
}