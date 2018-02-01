#include<stdio.h>					// Header file
void main()						
{
	int num,i,res,count=0;                         //initialization
	char repeat;
	do
	{
		printf("Enter the number: ");         
		scanf("%d",&num);                       // reads the input
		if(num < 0)
	        printf("Enter a positive number\n");
		else
		{
		for(i=1;i<num;i++)
		{
			res = num % i;                  //stores the divisors result
			if(res == 0)                    // checks the divisor is true
			{
				count=count + i;        //stores that divisor and adds it
			}
		}
		if ( count == num )                     //checking that number is perfect or not
			printf("%d is a perfect number\n",num);
		else
			printf("%d is not a perfect number\n",num);
		}
		printf("Do you wish to continue?[y/n]\n");  
		getchar();
		scanf("%c",&repeat);                     //reads input to repeat again or not 
	}while(repeat == 'y');
}
