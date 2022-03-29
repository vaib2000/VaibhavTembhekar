#include<stdio.h>

int main()
{
	float r,h,ans;
	printf("enter radius");
	scanf("%f",&r);
	printf("enter height");
	scanf("%f",&h);
	ans=(3.1452*r*r*h)*1/3;
	printf("%f",ans);
	return 0;
}
