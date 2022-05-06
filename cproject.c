#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char pass2[6],sname[20],mname[20],cat[10],bn[10],cn[30],g1,g2,g3,g4,g5,g6,g7,g8,g9;
int i,ern,rn,ie,ie_i,ae,ae_i,cad,cad_i,cad_p,cad_pi,ec2,ec2_i,ec2_p,ec2_pi,dmd,dmd_i,dmd_p,dmd_pi,ps,t1,t2,t3,t4,t5,t6,t7,t8,t9,total; 
    void input();
	void calculation();
	void IE();
	void AE();
	void CAD();
	void CADP();
	void EC();
	void ECP();
	void DMD();
	void DMDP();
	void PJS();
	void show();
int main ()
{
	
	char uname1[20]="vaibhav", pass1[10]="vt2000";
	char uname2[20],pass2[10];
	{
		printf("\n\t\tRashtrasant Tukdoji Maharaj Nagpur University");
		printf("\n\t\t\tFormerly known as Nagpur University");
		printf("\n\t\t\t\twww.rtmnuresults.org");
	}
	
	top:
	printf("\nEnter name : ");
	gets(uname2);
	printf("\nEnter password : ");
	for(i=0;i<6;++i)
	{
		pass2[i]=getch();
		printf("*");
	}
	
	if(strcmp(uname1,uname2)==0 && strcmp(pass1,pass2)==0)
	{
		printf("\nlogin successfully ");
		 input();
		 calculation();
		 IE();
		 AE();
		 CAD();
		 CADP();
		 EC();
		 ECP();
		 DMD();
		 DMDP();
		 PJS();
		 show();
	}
	else
	{
		printf("\ninvalid username or password");
		goto top;
	}
	
}

void input()
{
	printf("\nEnter name : ");
	fflush(stdin);
	gets(sname);
	printf("\nEnter Mother's name : ");
	fflush(stdin);
	gets(mname);
	printf("\nEnter Enrollment no. : ");
	fflush(stdin);
    scanf("%d",&ern);
    printf("\nEnter category : ");
    fflush(stdin);
	gets(cat);
    printf("\nEnter Branch name : ");
    fflush(stdin);
    gets(bn);
    printf("\nEnter college name : ");
    fflush(stdin);
    gets(cn);
    printf("\nEnter roll no. : ");
    fflush(stdin);
    scanf("%d",&rn);
    
    
    ie1:
    printf("\nEnter Industrial Engineering marks out of 80 : ");
    scanf("%d",&ie);
    if(ie>80)
    {
    	printf("\nenter marks between 0-80");
    	goto ie1;
	}
    
    ie1i:
    printf("\nEnter Industrial Engineering internal marks out of 20 : ");
    scanf("%d",&ie_i);
    if(ie_i>20)
    {
    	printf("\nenter marks between 0-20");
    	goto ie1i;
	}
    
    
    
	ae1:
    printf("\nEnter ELE-1 Automobile Engineering marks out of 80 : ");
    scanf("%d",&ae);
    if(ae>80)
    {
    	printf("\nenter marks between 0-80");
    	goto ae1;
	}
	
	ae1i:
    printf("\nEnter ELE-1 Automobile Engineering internal marks out of 20 : ");
    scanf("%d",&ae_i);
    if(ae_i>20)
    {
    	printf("\nenter marks between 0-20");
    	goto ae1i;
	}
	
	
	
	cad1:
    printf("\nEnter Computer Aided Design marks out of 80 : ");
    scanf("%d",&cad);
    if(cad>80)
    {
    	printf("\nenter marks between 0-80");
    	goto cad1;
	}
	
	cad1i:
    printf("\nEnter Computer Aided Design internal marks out of 20 : ");
    scanf("%d",&cad_i);
    if(cad_i>20)
    {
    	printf("\nenter marks between 0-20");
    	goto cad1i;
	}
	
	cad1p:
    printf("\nEnter Computer Aided Design practical marks out of 25 : ");
    scanf("%d",&cad_p);
    if(cad_p>25)
    {
    	printf("\nenter marks between 0-25");
    	goto cad1p;
	}
	
	cad1pi:
    printf("\nEnter Computer Aided Design practical internal marks out of 25 : ");
    scanf("%d",&cad_pi);
    if(cad_pi>25)
    {
    	printf("\nenter marks between 0-25");
    	goto cad1pi;
	}
	
	
	
	ec21:
    printf("\nEnter Energy conversion-II marks out of 80 : ");
    scanf("%d",&ec2);
    if(ec2>80)
    {
    	printf("\nenter marks between 0-80");
    	goto ec21;
	}
	
	ec21i:
    printf("\nEnter Energy conversion-II internal marks out of 20 : ");
    scanf("%d",&ec2_i);
    if(ec2_i>20)
    {
    	printf("\nenter marks between 0-20");
    	goto ec21i;
	}
	
	ec21p:
    printf("\nEnter Energy conversion-II marks practical out of 25 : ");
    scanf("%d",&ec2_p);
    if(ec2_p>25)
    {
    	printf("\nenter marks between 0-25");
    	goto ec21p;
	}
	
	ec21pi:
    printf("\nEnter Energy conversion-II marks practical internal out of 25 : ");
    scanf("%d",&ec2_pi);
    if(ec2_pi>25)
    {
    	printf("\nenter marks between 0-25");
    	goto ec21pi;
	}
	
	
	
	dmd1:
    printf("\nEnter Design of Mechanical Drives marks out of 80 : ");
    scanf("%d",&dmd);
    if(dmd>80)
    {
    	printf("\nenter marks between 0-80");
    	goto dmd1;
	}

    dmd1i:
    printf("\nEnter Design of Mechanical Drives internal marks out of 20 : ");
    scanf("%d",&dmd_i);
    if(dmd_i>20)
    {
    	printf("\nenter marks between 0-20");
    	goto dmd1i;
	}
	
	dmd1p:
    printf("\nEnter Design of Mechanical Drives practical marks out of 25 : ");
    scanf("%d",&dmd_p);
    if(dmd_p>25)
    {
    	printf("\nenter marks between 0-25");
    	goto dmd1p;
	}
	
    dmd1pi:
    printf("\nEnter Design of Mechanical Drives practical internal marks out of 25 : ");
    scanf("%d",&dmd_pi);
    if(dmd_pi>25)
    {
    	printf("\nenter marks between 0-25");
    	goto dmd1pi;
	}
    
    ps1:
    printf("\nEnter Project Seminar marks out of 50 : ");
    scanf("%d",&ps);
    if(ps>50)
    {
    	printf("\nenter marks between 0-50");
    	goto ps1;
	}
    
}


void calculation()
{
	t1=ie+ie_i;
	t2=ae+ae_i;
	t3=cad+cad_i;
	t4=cad_p+cad_pi;
	t5=ec2+ec2_i;
	t6=ec2_p+ec2_pi;
	t7=dmd+dmd_i;
	t8=dmd_p+dmd_pi;
	t9=ps;
	total=t1+t2+t3+t4+t5+t6+t7+t8+t9;
}

void IE()
{
	if (ie+ie_i<=100 && ie+ie_i>85 )
	{
		g1='A';
	}
	else if (ie+ie_i<=85 && ie+ie_i>70)
	{
		g1='B';
	}
	else if (ie+ie_i<=70 && ie+ie_i>55)
	{
		g1='C';
	}
	else if (ie+ie_i<=55 && ie+ie_i>40)
	{
		g1='D';
	}
	else 
	{
		g1='F';
	}
}

void AE()
{
	if (ae+ae_i<=100 && ae+ae_i>85 )
	{
		g2='A';
	}
	else if (ae+ae_i<=85 && ae+ae_i>70)
	{
		g2='B';
	}
	else if (ae+ae_i<=70 && ae+ae_i>55)
	{
		g2='C';
	}
	else if (ae+ae_i<=55 && ae+ae_i>40)
	{
		g2='D';
	}
	else 
	{
		g2='F';
	}	
}

void CAD()
{
	if (cad+cad_i<=100 && cad+cad_i>85 )
	{
		g3='A';
	}
	else if (cad+cad_i<=85 && cad+cad_i>70)
	{
		g3='B';
	}
	else if (cad+cad_i<=70 && cad+cad_i>55)
	{
		g3='C';
	}
	else if (cad+cad_i<=55 && cad+cad_i>40)
	{
		g3='D';
	}
	else 
	{
		g3='F';
	}	
}

void CADP()
{
		if (cad_p+cad_pi<=50 && cad_p+cad_pi>43 )
	{
		g4='A';
	}
	else if (cad_p+cad_pi<=43 && cad_p+cad_pi>36)
	{
		g4='B';
	}
	else if (cad_p+cad_pi<=36 && cad_p+cad_pi>29)
	{
		g4='C';
	}
	else if (cad_p+cad_pi<=29 && cad_p+cad_pi>22)
	{
		g4='D';
	}
	else 
	{
		g4='F';
	}
}

void EC()
{
	if (ec2+ec2_i<=100 && ec2+ec2_i>85 )
	{
		g5='A';
	}
	else if (ec2+ec2_i<=85 && ec2+ec2_i>70)
	{
		g5='B';
	}
	else if (ec2+ec2_i<=70 && ec2+ec2_i>55)
	{
		g5='C';
	}
	else if (ec2+ec2_i<=55 && ec2+ec2_i>40)
	{
		g5='D';
	}
	else 
	{
		g5='F';
	}	
}

void ECP()
{
		if (ec2_p+ec2_pi<=50 && ec2_p+ec2_pi>43 )
	{
		g6='A';
	}
	else if (ec2_p+ec2_pi<=43 && ec2_p+ec2_pi>36)
	{
		g6='B';
	}
	else if (ec2_p+ec2_pi<=36 && ec2_p+ec2_pi>29)
	{
		g6='C';
	}
	else if (ec2_p+ec2_pi<=29 && ec2_p+ec2_pi>22)
	{
		g6='D';
	}
	else 
	{
		g6='F';
	}
}

void DMD()
{
	if (dmd+dmd_i<=100 && dmd+dmd_i>85 )
	{
		g7='A';
	}
	else if (dmd+dmd_i<=85 && dmd+dmd_i>70)
	{
		g7='B';
	}
	else if (dmd+dmd_i<=70 && dmd+dmd_i>55)
	{
		g7='C';
	}
	else if (dmd+dmd_i<=55 && dmd+dmd_i>40)
	{
		g7='D';
	}
	else 
	{
		g7='F';
	}	
}

void DMDP()
{
	if (dmd_p+dmd_pi<=50 && dmd_p+dmd_pi>43 )
	{
		g8='A';
	}
	else if (dmd_p+dmd_pi<=43 && dmd_p+dmd_pi>36)
	{
		g8='B';
	}
	else if (dmd_p+dmd_pi<=36 && dmd_p+dmd_pi>29)
	{
		g8='C';
	}
	else if (dmd_p+dmd_pi<=29 && dmd_p+dmd_pi>22)
	{
		g8='D';
	}
	else 
	{
		g8='F';
	}	
}

void PJS()
{
		if (ps<=50 && ps>43 )
	{
		g9='A';
	}
	else if (ps<=43 && ps>36)
	{
		g9='B';
	}
	else if (ps<=36 && ps>29)
	{
		g9='C';
	}
	else if (ps<=29 && ps>22)
	{
		g9='D';
	}
	else 
	{
		g9='F';
	}
}

void show()
{
	printf("\n-----------------------------------------------------------------------------------------------------");
	printf("\nFcaulty of science & technology");
	printf("\n\tSEVENTH SEMESTER EXAMINATION FOR THE DEGREE OF BACHLOR OF ENGINEERING(NEW), WINTER 2021");
	printf("\n\t\t\t[FOURTH YEAR DEGREE COURCE]  [CREDIT BASED SYSTEM]");
	printf("\nstudent name : %s\t\t\trollno.  :%d     date  :09/04/2022",sname,rn);
	printf("\nmother's name: %s\t\t\t\t\tcenterno.:263    P/L   :149/3",mname);
	printf("\nenroll.no.   : %d\t\t\t\t\tcategory :%s     medium:ENGLISH",ern,cat);
	printf("\nbranch name  : %s ",bn);
	printf("\ncollege      :%s",cn);
	printf("\n-----------------------------------------------------------------------------------------------------");
	printf("\n|SR|SUBJECT\t\t\t| MARKS & CREDITS SCHEME  | \tMARKS & GARDE AWARDED \t\t    |");
	printf("\n|NO|       \t\t\t|---- MAX ----| MAX | MIN |TU/PU|TI/PI| TOTAL | GRADE |GP|CR|GPV|RMK|");
	printf("\n|  |       \t\t\t|TU/PU | TI/PI|MARKS|MARKS|     |     | MARKS |       |  |  |   |   |");
	printf("\n-----------------------------------------------------------------------------------------------------");
	printf("\n| 1|INDUSTRIAL ENGINEERING\t|  80  |  20  | 100 | 40  |  %d  |  %d |  %d   |  %c   |09|04|36 |   |",ie,ie_i,t1,g1);
	printf("\n| 2|AUTOMOBILE ENGINEERING\t|  80  |  20  | 100 | 40  |  %d  |  %d |  %d   |  %c   |09|04|36 |   |",ae,ae_i,t2,g2);
	printf("\n| 3|COMPUTER AIDED DESIGN\t|  80  |  20  | 100 | 40  |  %d  |  %d |  %d   |  %c   |07|04|30 |   |",cad,cad_i,t3,g3);
	printf("\n| 4|COMPUTER AIDED DESIGN(PRAC) |  25  |  25  | 050 | 25  |  %d  |  %d |  %d   |  %c   |09|04|09 |   |",cad_p,cad_pi,t4,g4);
	printf("\n| 5|ENERGY CONVERSION - II\t|  80  |  20  | 100 | 40  |  %d  |  %d |  %d   |  %c   |09|04|36 |   |",ec2,ec2_i,t5,g5);
	printf("\n| 6|ENERGY CONVERSION - II(PRAC)|  25  |  25  | 050 | 25  |  %d  |  %d |  %d   |  %c   |09|04|09 |   |",ec2_p,ec2_pi,t6,g6);
	printf("\n| 7|DESIGN OF MECHANICAL DRIVES |  80  |  20  | 100 | 40  |  %d  |  %d |  %d   |  %c   |09|04|36 |   |",dmd,dmd_i,t7,g7);
	printf("\n| 8|DESIGN OF MECHANICAL D(PRAC)|  25  |  25  | 050 | 25  |  %d  |  %d |  %d   |  %c   |09|04|09 |   |",dmd_p,dmd_pi,t8,g8);
	printf("\n| 9|PROJECT SEMINAR\t\t|  --  |  50  | 050 | 25  |  --  |  %d |  %d   |  %c   |10|04|30 |   |",ps,t9,g9);
	printf("\n-----------------------------------------------------------------------------------------------------");
	printf("\n");
	printf("\n-----------------------------------------------------------------------------------------------------");
	printf("\n|    INCENTIVE    |  aGPV |  TOTAL |  SGPA  |  OUT OF |  TOTAL MARKS |  OUT OF |  RESULT |  REMARKS |");
	printf("\n|                 |       | CREDITS|        |         |    OBTAINED  |  MARKS  |         |          |");
	printf("\n-----------------------------------------------------------------------------------------------------");
		if(t1>40&&t2>40&&t3>40&&t4>20&&t5>40&&t6>20&&t7>40&&t8>20&&t9>20)
						{
						printf("\n|                 |  229  |   26   |   --   |  10.00  |     %d      |    700  |  pass   |          |",total);
						}
						else
						{
						printf("\n|                 |  229  |   26   |   --   |  10.00  |     %d      |    700  |  fail    |          |",total);
						}	
	printf("\n-----------------------------------------------------------------------------------------------------");
	printf("\n\t\t\t\t\tThis statement is subjected ro corrections, if any");
	if(t1>40&&t2>40&&t3>40&&t4>20&&t5>40&&t6>20&&t7>40&&t8>20&&t9>20)
	{
		printf("\nCongratulations");
	}
	else 
	{
		printf("\nNeed to work hard");
	}	
}


