#include <stdio.h>
void main(){
	float stu[5][2];
	int count=0;
	for (int i = 0; i < 5; ++i)
	{
		printf("Enter Weight first then Height of Person %d :\n", i+1);
		for (int a = 0; a < 2; a++) scanf("%f",&stu[i][a]);
		if (stu[i][0]<50 && stu[i][1]>170) count++;
		printf("Weight of Person %d is : %f\nHeight is : %f\n\n",i+1,stu[i][0],stu[i][1]);
	}
	printf("No. of person having Weight Greater than 170 and height less than 50 are %d",count);
}