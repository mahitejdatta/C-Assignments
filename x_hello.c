#include<stdio.h>
void main()
{
	char choice;
	do{
	int i,j,k=0,num;			//Initialization
	printf("Enter the number:\n");		
	scanf("%d",&num);			//No. of lines the pattern to be printed
	for(i=1;i<=num;i++)			//Loop for rows
	{
		for(j=1;j<=num;j++)		//Loop for columns
		{
			if( i==j || j==num-k)	//Condition to print according to the pattern
				printf("HelloWorld");
			else
				printf("\t");
		}
		k++;
		printf("\n");			//Next line
		
	}
	
	printf("Do you wish to continue?[y/n]\n");
	scanf("	%c",&choice);
	}while(choice == 'y');
}
