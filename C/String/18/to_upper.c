#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	printf("Enter a string upto 50 char\n");
	scanf("%[^\n]%*c",str);
	for (size_t i = 0; str[i] != '\0'; ++i)
	{
		if (str[i]>='a' && str[i]<='z')
		{
			str[i]-=32;
		}
	}
	printf("The string is converted to upper case \n %s", str);
}