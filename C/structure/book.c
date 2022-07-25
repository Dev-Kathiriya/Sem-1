#include <stdio.h>
struct book
{
	char book_title[20],author_name[20],publication[20];
	float price;
};
void main(){
	int no;
	printf("Enter no.of books\n");
	scanf("%d",&no);
	struct book book_arr[no];
	for (int i = 0; i < no; ++i)
	{
		printf("Enter book title,author name,publication & price for %d book\n",i+1);
		scanf(" %[^\n]%*c %[^\n]%*c %[^\n]%*c %f",book_arr[i].book_title,book_arr[i].author_name,book_arr[i].publication,&book_arr[i].price);
	}
	for (int i = 0; i < no; ++i)
	{
		printf("Entered book title,author name,publication & price for %d is book\n %s\n%s\n%s\n %f\n",i+1,book_arr[i].book_title,book_arr[i].author_name,book_arr[i].publication,book_arr[i].price);
	}
}