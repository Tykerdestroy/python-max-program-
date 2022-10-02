#include <stdio.h>
int main()
{
	int a,b,c; //Variables to be placed
	
	printf("\t\tPROGRAM TO FIND GREATEST NUMBER\n");
	printf("______________________________________________________________________________");
	printf("\n\nEnter The First Number:"); //Input Your Number 1 
	scanf("%d",&a);
	printf("\nEnter The Second Number:");  //Input Your Number 2 
	scanf("%d",&b);
	printf("\nEnter Third The Number:");   //Input Your Number 3
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
// The program gonna print the value too shown in Int(integer) Form
	
}	
