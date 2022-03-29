#include<stdio.h>
int main()
{
	int no,rem,mul=1;
	printf("\n Enter any number :");
	scanf("%d",&no);
	while(no>0)
	{
		rem=no%10;
		mul=mul*rem;
		no=no/10;
	}
	printf("multiplication is :%d",mul);
	return 0;
}
	
