#include<stdio.h>
int main()
{
	int no,rem,sum=0;
	printf("\n Enter any number :");
	scanf("%d",&no);
	while(no>0)
	{
		rem=no%10;
		sum=sum+rem;
		no=no/10;
	}
	printf("sum is :%d",sum);
	return 0;
	
	
}
