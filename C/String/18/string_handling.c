#include<stdio.h>
#include<string.h>
int main(char str1[50],char str2 [40])
{
	printf("Enter a string with max 50 characters\n");
	scanf("%s",str1);
	printf("Enter a string with max 40 characters\n");
	scanf("%s",str2);
	//strlen Length of string
	printf("Length of string 1 is %ld and of second is %ld\n",strlen(str1),strlen(str2));
	//strcmp coparing 2 strings
	if (strcmp(str1,str2)==0) printf("Both strings are equal\n");
	else if (strcmp(str1,str2)>0) printf("Ascii value of string 1 is greater than string 2\n");
	else printf("Ascii value of string 2 is greater than string 1\n");
	//strcat str1+str2
	strcat(str1,str2);
	puts(str1);
	//strchr
	char ch;
	printf("Enter Character to Start reading string 1 from that characters\n");
	scanf("%c",&ch);
	char *res;
	res=strch(str1,ch);
	printf("%s\n",res);
	//strstr
	char *resu;
	resu=strch(str1,str2);
	printf("%s\n",resu);
	//strrev
	printf("Reverse of string 1 in\n%s\n",strrev(str1));
	//strlwr
	printf("String 1 in lowercase\n%s\n",strlwr(str1));
	//strupr
	printf("String 1 in Uppercase\n%s\n",strupr(str1));
	strcpy(str1,str2);
	printf("Now string 1 is %s \n& string 2 is\n",str1,str2);
	return 0;
}