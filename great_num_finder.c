#include <stdio.h>
int main()
{
	int a,b,c;
	
	printf("\t\tPROGRAM TO FIND GREATEST NUMBER\n");
	printf("______________________________________________________________________________");
	printf("\n\nEnter The First Number:");
	scanf("%d",&a);
	printf("\nEnter The Second Number:");
	scanf("%d",&b);
	printf("\nEnter Third The Number:");
	scanf("%d",&c);
	
	if(a<b && b<c)
	{
		printf("The Greatest Number Is %d",c);
	}
	else if(a>b && a>c)
	{
		printf("The Greatest Number Is %d",a);
	}
	else if(a<b && b>c)
	{
		printf("The Greatest Number Is %d",b);
	}
	else if(a>b && a<c)
	{
		printf("The Greatest Number Is %d",c);
	}
return 0;
}	
