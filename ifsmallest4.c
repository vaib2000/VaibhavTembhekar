#include<stdio.h>
int main()
{
	int n1,n2,n3,n4,min;
	printf("\n Enter for numbers");
	scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
	min=n4;
	if(min>n3)
	    min=n3;
	if(min>n2)
	    min=n2;
	if(min>n1)
	    min=n1;
	printf("\n smallest no number is %d",min);
	return 0;	    
		    
}
