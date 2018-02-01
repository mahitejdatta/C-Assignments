//Check whether the entered no. is even or odd
#include<stdio.h>
void main()
{	
	char choice;
	do
	{
		int n,res;			// Initialization
		printf("enter the number\n"); 
		scanf("%d",&n);
		res= n & 0x00000001;		// ANDing with 1 to check the no. is even or odd
		if(res == 1)			// If it results as 1 then no. is even
		printf("No. is Odd\n");		
		else if (res == 0)		// Else if results in 0 then no. is odd
		printf("No. is Even\n");
		printf("Do you wish to continue?[y/n]\n");
		scanf("	%c",&choice);
	}while(choice == 'y');

}	
