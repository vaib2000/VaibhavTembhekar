#include<stdio.h>
int main()
{
	int no=5,fact=1;
	printf("\n Enter any number :");
	scanf("%d",&no);
	while(no>0)
	{
		fact=fact*no;
		--no;
		
	}
	printf("factorial is :%d",fact);
	return 0;
}

