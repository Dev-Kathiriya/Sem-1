#include <stdio.h>
void main()
{
	int rows,cols;
	printf("Enter No.of rows and cols\n");
	scanf("%d%d",&rows,&cols);
	int matrix[rows][cols];
	for (int i = 0; i < rows; ++i)
	{
		printf("Enter elements of Row %d :\n", i+1);
		for (int a = 0; a < cols; ++a)
		{
			printf("Enter elements in col %d :\n", a+1);
			scanf("%d",&matrix[i][a]);
		}
	}
	printf("Your matrix is :\n");
	for (int i = 0; i < rows; ++i)
	{
		for (int a = 0; a < cols; ++a)
		{
			printf("%2d", matrix[i][a]);
		}
		printf("\n");
	}
}