#include <stdio.h>
void main(int rows,int cols)
{
	printf("Enter no.of rows(For rows=cols)\n");
	scanf("%d",&rows);
	float matrix[rows][rows];
	int no_of_row=0,no_of_col=0;
	for (int i = 0; i < rows; i++)
	{
		no_of_row++;
		printf("Row no. is %d :\n",no_of_row);
		for (int a = 0; a< rows; a++)
		{
			no_of_col++;
			printf("Enter Value for col %d :\n", no_of_col);
			scanf("%f",&matrix[i][a]);
		}
		no_of_col=0;
		printf("\n");
	}
	printf("Transpose of your Matrix is\n");
	for (int i = 0; i < rows; ++i)
	{
		for (int a = 0; a < rows; ++a)
		{
			printf("%2f",matrix[a][i]);
		}
		printf("\n");
	}
}