#include <stdio.h>
struct student_record
{
	char name[20],branch[20];
	float marks;
};
int main()
{
	int no;
	printf("Enter no.of student's record you want to take\n");
	scanf("%d",&no);
	struct student_record std_arr[no];
	for (int i = 0; i < no; ++i)
	{
		printf("Enter name,branch and total marks obtained of student %d :\n",i+1);
		scanf(" %[^\n]%*c %[^\n]%*c %f",std_arr[i].name,std_arr[i].branch,&std_arr[i].marks);
	}
	for (int i = 0; i < no; ++i)
	{
		printf("Enter name,branch and total marks obtained of student %d are:\n %s %s %f \n",i+1,std_arr[i].name,std_arr[i].branch,std_arr[i].marks);
	}
	return 0;
}