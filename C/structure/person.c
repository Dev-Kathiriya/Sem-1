#include <stdio.h>
struct person
{
	char name[20];
	char date[10];
	float salary;
};
void main(){
	int no;
	printf("Enter no.of persons entery you want to take\n");
	scanf("%d",&no);
	struct person per_arr[no];
	for (int i = 0; i < no; ++i)
	{
		printf("Enter name,date(dd/mm/yyyy format) of joining and salary for person %d :\n",i+1);
		scanf(" %[^\n]%*c %s %f",per_arr[i].name,per_arr[i].date,&per_arr[i].salary);
	}
	for (int i = 0; i < no; ++i)
	{
		printf("Entered name,date of joining and salary for person %d are:\n %s %s %f \n",i+1,per_arr[i].name,per_arr[i].date,per_arr[i].salary);
	}
}