#include <stdio.h>
int fibonacci(int i){
  if(i<=1) return i;
  return fibonacci(i-1)+fibonacci(i-2);
}
void main()
{
  int no;
  printf("Enter no. now \n");
  scanf("%d",&no);
  printf("Fibonacci no. is \n%d",fibonacci(no));
}