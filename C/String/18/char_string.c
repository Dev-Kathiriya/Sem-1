#include <stdio.h>
#include <string.h>
int main()
{
	char str[50],ch;
	printf("Enter a string upto 50 char and then enter character you want to search\n");
	scanf("%[^\n]%*c",str);
	scanf("%c",&ch);
	char *res;
	res=strchr(str,ch);
	printf("%s\n",res);
	return 0;
}