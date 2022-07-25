#include<stdio.h>
double simpleint(double p,double r,double n){
	double a=(p*r*n)/100;
	return a;
}
void main()
{
	double p,r,n;
    printf("Enter value of p ");
    scanf("%lf",&p);
    printf("Enter value of r ");
    scanf("%lf",&r);
    printf("Enter value of n ");
    scanf("%lf",&n);
    printf("simple interest is :\n %lf",simpleint(p,r,n));
}