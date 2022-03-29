#include<stdio.h>

int main()
{
	int a,b,temp;
	printf("enter value of a and b\n");
	scanf("%d%d",&a,&b);
	printf("\nbefore interchange a=%d\tb=%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nafter interchange a=%d\tb=%d",a,b);
	return 0;
}
