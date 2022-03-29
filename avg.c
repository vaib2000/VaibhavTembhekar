#include<stdio.h>

int main()
{
	int p1,p2,p3,avg;
	
	printf("enter marks1 : ");
	scanf("%d",&p1);
	printf("enter marks2 : ");
	scanf("%d",&p2);
	printf("enter marks3 : ");
	scanf("%d",&p3);
	avg=(p1+p2+p3)/3;
	printf("%d",avg);
	return 0;
}
