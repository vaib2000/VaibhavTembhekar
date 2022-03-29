#include<stdio.h>
int main()
{
	int no,count=0;
	printf("\n Enter any number :");
	scanf("%d",&no);
	while(no>0)
	{
		no=no/10;
		++count;
	}
	printf("\ncount is :%d",count);
	return 0;
	
	
}
