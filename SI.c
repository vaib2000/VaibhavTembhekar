#include<stdio.h>
int main()
{
	int SI,P,R,T;
	printf("Enter P,R,T : ");
	scanf("%d%d%d",&P,&R,&T);
	SI=(P*R*T)/100;
	printf("simple intrest : %d",SI);
	return 0;
}
