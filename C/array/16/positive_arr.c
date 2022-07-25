#include<stdio.h>
void main(){
	int no,poscount=0,negcount=0;
	printf("Enter number of numbers\n");
	scanf("%d", &no);
	int pos[no-1];
	for (int i = 0; i < no; ++i)
	{
		scanf("%d", &pos[i]);
		if (pos[i]>0) poscount++;
		else if (pos[i]<0) negcount++;
	}
	printf("No. of Positive no. are %d \nNo. of Negative no. are %d", poscount,negcount);

}