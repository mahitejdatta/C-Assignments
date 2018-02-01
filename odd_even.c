#include<stdio.h>						  // Header file
void main()							 
{
	int num;                				  // reading the number from user
	char repeat;		 				  // To satisfy loop condition
	do
	{
		printf("Enter the number: "); 			  // Prints the statement
		scanf("%d",&num);	     			  // reads input from user
		if(num%2 == 0)		    			  // condition for even number
		{
			if(num > 0)          			  // checks number is positive 
				printf("Positive even number\n"); 
			else
				printf("Negative even number\n");
		}
		else if (num%2 != 0)       			  // condition for odd number
		{
			if(num > 0)      			  // checks number is negative
				printf("Positive odd number\n");
			else
				printf("Negative odd number\n");
		}
		printf("Do you wish to continue? y/n?\n"); 
		getchar();
		scanf("%c",&repeat);       			  // reads input to repeat again or exit
	
	 }while(repeat == 'y');	 				  //  loop to repeat

}

