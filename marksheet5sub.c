#include<stdio.h>

int main()
{
	int rollno,enrollno,eng,maths,phy,chem,bio,total;
	float per;
	printf("Enter roll no : ");
	scanf("%d",&rollno);
	printf("\nEnter enroll no : ");
	scanf("%d",&enrollno);
	printf("\nEnter English : ");
	scanf("%d",&eng);
	printf("\nEnter Maths : ");
	scanf("%d",&maths);
	printf("\nenter physics : ");
	scanf("%d",&phy);
	printf("\nenter chem : ");
	scanf("%d",&chem);
	printf("\nenter bio : ");
	scanf("%d",&bio);
	total=eng+maths+phy+chem+bio;
	per=total/5;
	printf("\n--------------------------------------------------------------");
	printf("\n\t Rajiv Gandhi College of Engineering and Research");
	printf("\n--------------------------------------------------------------");
	printf("\nName: Vaibhav Tembhekar \t rollno:%d \t enrollno:%d",rollno,enrollno);
	printf("\n--------------------------------------------------------------");
	printf("\nSubjects\t\ttotal marks\t\tobtained marks");
	printf("\n--------------------------------------------------------------");
	printf("\nEnglish  \t\t100       \t\t%d",eng);
	printf("\nMaths    \t\t100       \t\t%d",maths);
	printf("\nPhysics  \t\t100       \t\t%d",phy);
	printf("\nChemistry\t\t100       \t\t%d",chem);
	printf("\nBiology  \t\t100       \t\t%d",bio);
	printf("\n--------------------------------------------------------------");
	printf("\n   \t\ttotal:500       \t\t%d",total);
	printf("\n\t\tpercentage:%f",per);
	return 0;
	
	
	
}
