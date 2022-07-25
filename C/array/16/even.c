#include<stdio.h>
void main(){
	int no,even=0,odd=0;
	printf("Enter number of numbers\n");
	scanf("%d", &no);
	int pos[no-1];
	for (int i = 0; i < no; ++i)
	{
		scanf("%d", &pos[i]);
		if (pos[i]%2==0) even++;
		else odd++;
	}
	printf("No. of Even no. are %d \nNo. of Odd no. are %d", even,odd);

}