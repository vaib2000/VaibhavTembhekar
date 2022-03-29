#include<stdio.h>
 
int main()
{
	int a,b;
	printf("\nEnter valuie of a and b");
	scanf("%d%d",&a,&b);
	printf("\nBefore interchange a=%d\tb=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nafter interchange a=%d\tb=%d",a,b);
	return 0;
 } 
