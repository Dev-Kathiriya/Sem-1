#include <stdio.h>
void main(float matrix[3][3])
{
	for (int i = 0; i < 3; ++i)
	{
		printf("Enter elements of Row %d :\n", i+1);
		for (int a = 0; a < 3; ++a)
		{
			printf("Enter elements in col %d :\n", a+1);
			scanf("%f",&matrix[i][a]);
		}
	}
	printf("Your matrix is :\n");
	int neu=0,pos=0;
	for (int i = 0; i < 3; ++i)
	{
		for (int a = 0; a < 3; ++a)
		{
			if (matrix[i][a]==0) neu++;
			else if (matrix[i][a]>0) pos++;
		}
	}
	printf("No. of Zero no. Entered are %d\nNo. of Positive no. Entered are %d\nNo. of Negative no. Entered are %d\n", neu,pos,9-neu-pos);
}