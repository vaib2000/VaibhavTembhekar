#include<stdio.h>
int main()	
{	
	int rev=0,no,rem,nsave;
	printf("Enter any number : ");
	scanf("%d",&no);
	nsave=no;
	do
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	while(no>0);
	if(nsave==rev)
	printf("%d is palindrom",nsave);
	else
	printf("%d is not palindrom",nsave);
	return 0;
}

