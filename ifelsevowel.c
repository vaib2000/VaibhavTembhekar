#include<stdio.h>
#include<string.h>
int main()
{
	char ch[1];
	printf("enter character\n");
	gets(ch);
	if(strcmp(ch,"a")==0 || strcmp(ch,"e")==0 || strcmp(ch,"i")==0 || strcmp(ch,"0")==0 || strcmp(ch,"u")==0)
	{
		printf("it is a vowel");
	}
	else
	{
		printf("it is not a vowel"); 
	}
}
