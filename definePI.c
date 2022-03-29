#include<stdio.h>
# define PI 3.1452
int main()
{
	float radius,area;
	printf("enter rafius of circle : ");
	scanf("%f",&radius);
	area=PI*radius*radius;
	printf("area of circle : %f",area);
	return 0;
	
}
