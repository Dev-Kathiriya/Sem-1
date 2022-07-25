#include<stdio.h>
double exchange(double *x,double *y){
  *x+=*y;
  *y=*x-*y;
  *x-=*y;
}
void main(){
  double no1,no2;
  printf("Enter 2 no.\n");
  scanf("%lf %lf",&no1,&no2);
  printf("Before exchange value of no1 and no 2 are\n %lf , %lf\n",no1,no2);
  exchange(&no1,&no2);
  printf("After exchange value of no1 and no2 are\n %lf , %lf\n",no1,no2);
}