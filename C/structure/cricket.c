#include <stdio.h>
struct cricket
{
	char player_name[20],team_name[20];
	float batting_avg;
};
int main()
{
	int no;
	printf("Enter no.of players data you want to take\n");
	scanf("%d",&no);
	struct cricket cr_arr[no];
	for (int i = 0; i < no; ++i)
	{
		printf("Enter player name,team name and batting avg information %d :\n",i+1);
		scanf(" %[^\n]%*c %[^\n]%*c %f",cr_arr[i].player_name,cr_arr[i].team_name,&cr_arr[i].batting_avg);
	}
	for (int i = 0; i < no; ++i)
	{
		printf("Enter player name,team name and batting avg information %d are:\n %s %s %f \n",i+1,cr_arr[i].player_name,cr_arr[i].team_name,cr_arr[i].batting_avg);
	}
	return 0;
}