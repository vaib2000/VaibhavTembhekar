#include<stdio.h>
#include<string.h>
int main()
{
	char gender[1];
	printf("enter gender(m/f) : ");
	gets(gender);
	int p1,p2,p3,total,per;
	printf("\nenter three paper marks");
	scanf("%d%d%d",&p1,&p2,&p3);
	total=p1+p2+p3;
	per=total/3;
	if(per>=62 && strcmp(gender,"f")==0)
	{
		printf("she can take admission");
	}
	else
	{
		printf("she cant take admission");
	}
}
