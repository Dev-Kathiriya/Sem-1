#include<stdio.h>
int main()
{
	int n;
	printf("Enter no.of character of strings you want to enter\n");
	scanf("%d",&n);
	char str[n],*ptr;
	printf("Enter character Now\n");
	scanf(" %[^\n]%*c",str);
	ptr=&str[0];
	printf("Address of the strings starts from\n %p \nString entered is \n",ptr);
	for (int i = 0; i < n; ++i)
	{
		printf("%c", *ptr);
		ptr++;
	}
	return 0;
}
