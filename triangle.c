#include<stdio.h>

int main()
{
	float b,h,ans;
	
	printf("enter height : ");
	scanf("%f",&h);
	printf("enter base : ");
	scanf("%f",&b);
	
	ans=0.5*h*b;
	
	printf("%f",ans);
	
	return 0;
}
