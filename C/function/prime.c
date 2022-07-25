#include<stdio.h>
int prime(unsigned int no){
	int i,flag=1;
	for (i = 2; i < no/2; ++i)
	{
		if (no%i==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
}
void main(int no){
	printf("Enter Positive no. to Check wheter it is prime or not if it returns 1 it is prime else(0) it is not\n");
	scanf("%d",&no);
	printf("%d",prime(no));
}