#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	unsigned int length=0,j=0;
	printf("Enter a string upto 50 char\n");
	scanf("%[^\n]%*c",str);
	for (int i = 0; str[i]!='\0'; ++i)
	{
		length++;
	}
	char rev[length+1];
	for (int i = length-1; i >=0; i--)
	{
		rev[j]=str[i];
		j++;
	}
	printf("Reverse string is: \n %s",rev);
	return 0;
}