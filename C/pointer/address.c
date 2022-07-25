#include<stdio.h>
int main()
{
	int var=5,*ptr=&var;
	printf("Address of variable is %x\n",ptr);
	return 0;
}