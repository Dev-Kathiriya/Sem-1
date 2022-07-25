#include<stdio.h>
void main(){
	int rows,cols;
	printf("Enter no.of rows and cols of matrix\n");
	scanf("%d%d",&rows,&cols);
	float matrix_a[rows][cols],matrix_b[rows][cols],result[rows][cols];
	printf("Now Enter values for First Matrix\n");
	for (int i = 0; i < rows; ++i)
	{
		printf("For row %d :\n", i+1);
		for (int a = 0; a < cols; ++a)
		{
			printf("Enter Value for col %d :\n",a);
			scanf("%f",&matrix_a[i][a]);
		}
	}
	printf("Now Enter values for Second Matrix\n");
	for (int i = 0; i < rows; ++i)
	{
		printf("For row %d :\n", i+1);
		for (int a = 0; a < cols; ++a)
		{
			printf("Enter Value for col %d :\n",a);
			scanf("%f",&matrix_b[i][a]);
		}
	}
	printf("Now Multiplication of this two Matrix will be\n");
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			result[i][j]=0;
			for (int a = 0; a < cols; ++a)
			{
				result[i][j]+=matrix_a[i][a]*matrix_b[a][j];
			}
		}
	}
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			printf("%2f",result[i][j]);
		}
		printf("\n");
	}
}