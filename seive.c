#include<stdio.h>
int main()
{    char choice;
     do{
	int i,j,product,limit,l,flag;		//Initialize
	printf("Enter the limit\n");	
	scanf("%d",&limit);			//Read the limit
	for(i=2;i<limit;i++)			//loop for checking prime no.s within the limit
	{
		flag=0;				//Initializing flag to print prime no.
		for(j=2;j<i;j++)		//loop to check one no. is prime
		{
			for(l=2;l<=j;l++) 	// loop to check no. is multipleany of its lower no.s
			{
				product=l*j;	//multiplies no. every time 
				if(i==product)	// if the product is equal to no. break the loop
				{
					flag=1;
					break;
				}
			}
		}
		if(flag==0)
		printf("%d ",i);		//prints if it is a prime no.
		
	}
		printf("\nDo you wish to continue?[y/n]\n");
		scanf("	%c",&choice);
      }while(choice == 'y');
}
