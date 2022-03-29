#include<stdio.h>

int main()
{
	int num,a,b,c,rev;
	printf("enter any 3 digit number : ");
	scanf("%d",&num);
	a=num%10;
	num=num/10;
	b=num%10;
	num=num/10;
	c=num;
	rev=(a*100+b*10+c);
	printf("\nreverse number : %d",rev);
	return 0;
}
