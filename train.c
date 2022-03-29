#include<stdio.h>
#define kam 50
#define bnd 100
#define tum 150
#define gnd 200
int main()
{
	char p_name[20],source[20]="nagpur",dest[20];
	int p,total_fare,f,per;
	printf("\n kamptee %d",kam);
	printf("\n bhandara %d",bnd);
	printf("\n tumsar %d",tum);
	printf("\n gondiya %d",gnd);
	printf("\n enter destination : ");
	gets(dest);
	printf("\n enter name of passenger : ");
	gets(p_name);
	printf("\n enter number of passenger : ");
	scanf("%d",&p);
	printf("\n enter fare : ");
	scanf("%d",&f);
	total_fare=p*f;
	per=total_fare/p;
	printf("\n----------------------------------------------------------");
	printf("\nname : %s",p_name);
	printf("\nsource : %s\t\tdestination : %s",source,dest);
	printf("\n----------------------------------------------------------");
	printf("\nnumber of passenger : %d",p);
	printf("\nfare per passenger  : %d",per);
	printf("\ntotal fare          : %d",total_fare);
	printf("\n----------------------------------------------------------");
	printf("\n Happy journey *_* ");
	return 0;
	
	
	
	
	
	
	
}
