/*f(x) =x-x^3/3! +x^5/5!...*/
#include <stdio.h>
#include "../My header files/pow.h"
int factorial(int i){
  if(i==0) return 1;
  return i*factorial(i-1);
}
double evaluate(int no,int power){
  int n;
  double result=0;
  for(int i=1;;i++){
    n=(4*i)-3;
    if (n<=power)
    {
      result+=pow(no,n)/factorial(n);
    }
    else break;
    
  }
  for(int i=1;i<=power/2;i++){
    n=(4*i)-1;
    if (n<=power)
    {
      result-=pow(no,n)/factorial(n);
    }
    else break;
  }

  return result;
}
void main()
{
  int no,power;
  printf("Enter no and then max power in odd no. it can have\n");
  scanf("%d",&no,&power);
  for (; power%2==0;)
  {
    printf("Enter valid power\n");
    scanf("%d",&power);
  }
  printf("Ans is is :\n %lf",evaluate(no,power));
}
