#include<stdio.h>
int main()
{
    float unit,dis,ele_bill;
    int i=1,j=1,k=1,L=1;
	printf("\nEnter no of unit : ");
	scanf("%f",&unit);
	if(unit>=0 && unit<=100)
	{
		ele_bill=unit*3.5;
		dis=ele_bill*1;
		ele_bill=ele_bill-dis;
	}
	else if(unit>100 && unit<=150)
	{
		ele_bill=unit*4.5;
		dis=ele_bill*0.75;
		ele_bill=ele_bill-dis;
	}
	else if(unit>150 && unit<=200)
	{
		ele_bill=unit*5;
		dis=ele_bill*0.50;
		ele_bill=ele_bill-dis;
	}
	else 
	{
		ele_bill=unit*6;
		ele_bill=ele_bill+300;
	}
	while(60>i)
	{
		printf("-");
		i++;
    }
	printf("\n\t\tELECTRIC BILL\n");
	while(60>j)
	{
		printf("-");
		j++;
    }
	printf("\n\tNumber of unit \t\t: %.2f",unit);
	printf("\n\tTotal Discount \t\t: %.2f",dis);
	printf("\n\tActual bill \t\t: %.2f",ele_bill+dis);
	printf("\n\tTotal Electric Bill \t: %.2f\n",ele_bill);
	while(60>k)
	{
		printf("-");
		k++;
    }
    printf("\n\t\t  THANK YOU\n");
    while(60>L)
	{
		printf("-");
		L++;
    }
	
	return 0;
	
}
