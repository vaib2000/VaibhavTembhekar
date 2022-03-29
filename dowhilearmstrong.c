#include<stdio.h>
int main()
{
	int sum=0,no,rem,nsave;
	printf("Enter any number : ");
	scanf("%d",&no);
	nsave=no;
	do
	{
		rem=no%10;
		sum=sum+rem*rem*rem;
		no=no/10;
	}
	while(no>0);
	if(nsave==sum)
	printf("%d is armstrong",nsave);
	else
	printf("%d is not armstrong",nsave);
	return 0;
}

