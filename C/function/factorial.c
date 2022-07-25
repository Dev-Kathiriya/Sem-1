#include <stdio.h>
int factorial(int i){
  if(i==0) return 1;
  return i*factorial(i-1);
}
void main()
{
  int no;
  printf("Enter no");
  scanf("%d",&no);
  printf("factorial is :\n%d",factorial(no));
}