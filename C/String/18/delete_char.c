#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],ch,str1[50];
	int j=0;
	printf("Enter a string upto 50 char and then enter character you want to delete\n");
	scanf("%[^\n]%*c",str);
	scanf("%c",&ch);
	for (int i = 0;str[i]!='\0';i++)
	{
		if (str[i]!=ch) {
		   str1[j++]=str[i];
		}
	}
	printf("%s",str1);
	return 0;
}