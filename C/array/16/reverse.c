#include<stdio.h>
void main(){
	int no,even=0,odd=0;
	printf("Enter number of numbers\n");
	scanf("%d", &no);
	int pos[no-1];
	for (int i = 0; i < no; ++i)
	{
		scanf("%d", &pos[i]);
	}
	for (int i = no-1; i >= 0; i--)
	{
		printf("%d", pos[i]);
	}

}