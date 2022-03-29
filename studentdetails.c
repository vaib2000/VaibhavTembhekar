#include<stdio.h>
int main()
{
	char name1[20],name2[20],name3[20],name4[20],name5[20];
	char college1[20],college2[20],college3[20],college4[20],college5[20];
	char branch1[20],branch2[20],branch3[20],branch4[20],branch5[20];
	long unsigned int rollno1,time1,mobile1;
	long unsigned int rollno2,time2,mobile2;
	long unsigned int rollno3,time3,mobile3;
	long unsigned int rollno4,time4,mobile4;
	long unsigned int rollno5,time5,mobile5;
	
	printf("\nenter name : ");
	gets(name1);
	printf("\nenter college name : ");
	gets(college1);
	printf("\nenter branch name : ");
	gets(branch1);
    printf("\nenter roll number : ");
	scanf("%lu",&rollno1);
	printf("\nenter class time : ");
	scanf("%lu",&time1);
	printf("\nenter mobile number : ");
	scanf("%lu",&mobile1);
	
	printf("\nenter name : ");
	gets(name2);
	gets(name2);
	printf("\nenter college name : ");
	gets(college2);
	printf("\nenter branch name : ");
	gets(branch2);
    printf("\nenter roll number : ");
	scanf("%lu",&rollno2);
	printf("\nenter class time : ");
	scanf("%lu",&time2);
	printf("\nenter mobile number : ");
	scanf("%lu",&mobile2);
	
	printf("\nenter name : ");
	gets(name3);
	gets(name3);
	printf("\nenter college name : ");
	gets(college3);
	printf("\nenter branch name : ");
	gets(branch3);
    printf("\nenter roll number : ");
	scanf("%lu",&rollno3);
	printf("\nenter class time : ");
	scanf("%lu",&time3);
	printf("\nenter mobile number : ");
	scanf("%lu",&mobile3);
	
	printf("\nenter name : ");
	gets(name4);
	gets(name4);
	printf("\nenter college name : ");
	gets(college4);
	printf("\nenter branch name : ");
	gets(branch1);
    printf("\nenter roll number : ");
	scanf("%lu",&rollno4);
	printf("\nenter class time : ");
	scanf("%lu",&time4);
	printf("\nenter mobile number : ");
	scanf("%lu",&mobile4);
	
	printf("\nenter name : ");
	gets(name5);
	gets(name5);
	printf("\nenter college name : ");
	gets(college5);
	printf("\nenter branch name : ");
	gets(branch5);
	printf("\nenter roll number : ");
	scanf("%lu",&rollno5);
	printf("\nenter class time : ");
	scanf("%lu",&time5);
	printf("\nenter mobile number : ");
	scanf("%lu",&mobile5);
	
	printf("\n\t\tAPS Microtech C,C++ Batch");
	printf("--------------------------------------------------------");
	printf("\nrollno\tname of student\tcollege\tbranch\ttime\tmobile no ");
	printf("\n------------------------------------------------------");
	printf("\n%lu\t %s\t     %s\t     %s\t   %lu\t %lu",rollno1,name1,college1,branch1,time1,mobile1);
	printf("\n%lu\t %s\t     %s\t     %s\t   %lu\t %lu",rollno2,name2,college2,branch2,time2,mobile2);
	printf("\n%lu\t %s\t     %s\t     %s\t   %lu\t %lu",rollno3,name3,college3,branch3,time3,mobile3);
	printf("\n%lu\t %s\t     %s\t     %s\t   %lu\t %lu",rollno4,name4,college4,branch4,time4,mobile4);
	printf("\n%lu\t %s\t     %s\t     %s\t   %lu\t %lu",rollno5,name5,college5,branch5,time5,mobile5);
	
	return 0;
	
	
}
