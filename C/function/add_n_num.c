#include<stdio.h>
int summation(int no){
	int sum=0;
	for (int i = 1; i<= no; ++i)
	{
		sum+=i;
	}
	return sum;
}
void main(){
	int n;
	printf("Enter last number to add ");
    scanf("%d",&n);
    printf("Summation is\n %d", summation(n));
}