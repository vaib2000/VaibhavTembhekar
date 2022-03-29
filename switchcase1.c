#include<stdio.h>
#include<process.h>
int main()
{
	int ch,a,b,res;
	printf("\n Enter two numbers : ");
	scanf("%d%d",&a,&b);
	printf("\n1. ADD\n2. MUL\n3. SUB\n4. DIV\n5. Exit");
	printf("\n Enter any choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nResult=%d",a+b);
			break;
		case 2:	
			printf("\nResult=%d",a*b);
			break;
		case 3:	
			printf("\nResult=%d",a-b);
			break;
		case 4:	
			printf("\nResult=%d",a/b);
			break;
		case 5:
			exit(0);
		default :
			printf("\nwrong selection");
    }
}

