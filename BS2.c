#include<stdio.h>

int main()
{
	float bs,gs,ta,da,hra;
	printf("\nEnter basic salary :");
	scanf("%f",&bs);
	hra=0.60*bs;
	da=0.50*bs;
	ta=0.40*bs;
	gs=hra+da+ta+bs;
	printf("\nThe gross salary is %.2f",gs);
	return 0;
}
