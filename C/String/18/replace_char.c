#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],ch,ch1;
	int j=0;
	printf("Enter a string upto 50 char and then enter character you want to replace and then Enter replace no. \n");
	scanf("%[^\n]%*c",str);
	scanf("%c %c",&ch,&ch1);
	for (int i = 0;str[i]!='\0';i++)
	{
		if (str[i]==ch) {
		  str[i]=ch1;
		}
	}
	printf("%s",str);
	return 0;
}