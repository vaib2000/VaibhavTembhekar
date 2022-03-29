#include<stdio.h>
int main()
{
	int a,b,c;
	float ans;
	printf("\nEnter value of a :");
	scanf("%d",&a);
	printf("\nEnter value of b :");
	scanf("%d",&b);
	printf("\nEnter value of c :");
	scanf("%d",&c);
	ans=(-b+b*b+c)/4*a;
	printf("\nans is %f",ans);
	return 0;
	
}
