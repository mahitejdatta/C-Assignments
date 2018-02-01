#include<stdio.h>					//header file
void main()					
{	
	int fib;                                       // initialization
	char repeat;
	do 				
	{       
		printf("Enter the Limit: ");	
		scanf("%d",&fib);			// Reads the limit
		int second;
		if(fib>0)
			second = 1;			// Intializing the variables
		else if(fib<0)
			second= -1;
		int first=0,res;				
		printf("%d %d ",first,second);		// Prints first 2 numbers to proceed
		while(1)				// loops repeatedly
		{
					// adds the 2 number and stores next fibonacci number
			
			if(fib > 0)                            // checks the number is positive
			{
				res = first + second;
				if (res > fib )			// Checks the condition that exceeds the limit
					break;			// breaks the loop
				else			
				{
					first=second;
					second=res;
					printf("%d ",res);	// Prints next fibonacci number
				}
			}
			else if(fib < 0)                        //checks the number is negative
			{
			res = first - second;
			 if(res < fib)
				break;
			else	
			{
				first=second;
				second=res;
				printf("%d ",res);	// Prints next fibonacci number
			}
			}
		}
		printf("\n");			
		printf("Do you wish to continue?[y/n]\n");
		getchar();
		scanf("%c",&repeat);			// Reads from user to repeat or exit
	}while(repeat == 'y');				// condition to repeat the loop

}
