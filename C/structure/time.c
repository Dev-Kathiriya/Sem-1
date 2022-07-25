#include <stdio.h>
struct time_struct
{
	int hour,minute,second;
};
void main(){
	struct time_struct time;
	printf("Enter hours, minutes and seconds now\n");
	scanf("%d %d %d",&time.hour,&time.minute,&time.second);
	printf("time is %d: %d: %d\n", time.hour,time.minute,time.second);
}