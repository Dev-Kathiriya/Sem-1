#include <stdio.h>
#include<string.h>
char toupper(char ch){
  if(ch>='a' && ch<='z'){
    ch=ch-32;
  }
  return ch;
}
void main()
{
  char str[50];
  printf("Enter your string now\n");
  scanf("%[^\n]%*c",str);
  for(int i=0;str[i] != '\0';i++){
    str[i]= toupper(str[i]);
  }
  printf("Now string is :\n%s",str);
}