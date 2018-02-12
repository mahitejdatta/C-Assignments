//To find fibonacci series using recursive function
#include<stdio.h>
//global variables
int limit,res;
//Function to find fibonacci series for a positive number
int pos_fibonacci(int first,int second)
{
	//finding next number in the series
	res = first + second;
	//condition to print the series upto the limit
	if (res>limit)
		return 0;
	else
	{
		first=second;
		second=res;
		printf("%d ",res);
		//recursive call
		return pos_fibonacci(first,second);
	}


}
//Function call for the negative fibonacci
int neg_fibonacci(int first,int second)
{
	res=first - second;
	if (res<limit)
		return 0;
	else
	{
		first=second;
		second=res;
		printf("%d ",res);
		return neg_fibonacci(first,second);
	}
}


int main()
{
	char choice;
	do
	{
		printf("Enter the limit\n");
		scanf("%d",&limit);
		if(limit>0)
		{
			printf("0 1 ");
			//Function call to positive fibonacci series
			 pos_fibonacci(0,1);
		}
		else
		{
			printf("0 -1 ");
			//Function call to negative fibonacci series
			neg_fibonacci(0,-1);
		}
		printf("\nDo you wish to continue?(y/n)\n");
		scanf(" %c",&choice);
	}while(choice == 'y');

}

