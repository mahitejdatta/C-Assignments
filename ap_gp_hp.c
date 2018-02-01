#include<stdio.h>
void main()
{
	int a,d,n,res,i;
	char repeat;
	do
	{
	printf("Enter first number:\n");               
	scanf("%d",&a);                                        //reads first number
	float rec,c=(float)a;
	
	printf("Enter difference:\n");
	scanf("%d",&d);					      //reads the difference
	
	printf("Enter the limit:\n");
	scanf("%d",&n);					      //reads the limit
	
	int b=a;
	//printf("%d\n",store);
	
	if(n<0)						     //if limit number is negative then exit
		printf("Limit should be positive no.");
	
	else
		{  
			printf("Ap :%d ",a);                 //Loop to print the Ap series
			for(i=1;i<n;i++)
			{	
				res=a+d;		     
				a=res;
				printf("%d ",res);           //prints next term in the series
			}
			
			printf("\nGp :%d ",b);               //Loop to print the Gp series
			for(i=1;i<n;i++)
			{	
				res=b*d;
				b=res;
				printf("%d ",res);	    // Prints the next term in the series
			}
			
			printf("\nHp : "); 		   //Loop to print the Hp series
			for(i=1;i<=n;i++)
			{	
				rec=(1/(float)c);          //Typecasting the integer number to float
				res=c+d;
				c=res;
				printf("%f ",rec);	   //Rpints the next term in the series
			}
			printf("\n");
			printf("Do you wish to continue?[y/n]\n");
			getchar();
			scanf("%c",&repeat);		  //Reads the user input to repeat the loop
		}
	}while(repeat == 'y');        
}

